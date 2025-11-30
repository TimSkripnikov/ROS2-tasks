#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

from tf2_ros import Buffer, TransformListener
from tf2_ros import LookupException, ConnectivityException, ExtrapolationException

def quaternion_to_euler_angle(w, x, y, z):
    ysqr = y * y

    t0 = +2.0 * (w * x + y * z)
    t1 = +1.0 - 2.0 * (x * x + ysqr)
    X = math.degrees(math.atan2(t0, t1))

    t2 = +2.0 * (w * y - z * x)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    Y = math.degrees(math.asin(t2))

    t3 = +2.0 * (w * z + x * y)
    t4 = +1.0 - 2.0 * (ysqr + z * z)
    Z = math.degrees(math.atan2(t3, t4))

    return X, Y, Z

class BalanceController(Node):
    def __init__(self):
        super().__init__('balance_controller')

        self.Kp_linear = 1.5
        self.Kp_angular = 1.2
        self.max_speed = 0.8
        self.angle_deadzone = math.radians(30.0)

        self.cmd_pub = self.create_publisher(Twist, '/model/ballbot/cmd_vel', 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.target_frame = 'ballbot/chassis'
        self.source_frame = 'ballbot/odom'

        self.timer = self.create_timer(0.02, self.control_loop)

        self.get_logger().info('Balance controller started')

    def control_loop(self):
        try:
            trans = self.tf_buffer.lookup_transform(
                self.source_frame,
                self.target_frame,
                rclpy.time.Time())
            
            q = trans.transform.rotation
            roll, pitch, yaw = quaternion_to_euler_angle(q.x, q.y, q.z, q.w)

            if abs(pitch) < self.angle_deadzone and abs(roll) < self.angle_deadzone:
                return

            vx = -self.Kp_linear * pitch
            vy = -self.Kp_linear * roll
            wz = -self.Kp_angular * roll

            vx = max(min(vx, self.max_speed), -self.max_speed)
            vy = max(min(vy, self.max_speed), -self.max_speed)
            wz = max(min(wz, self.max_speed), -self.max_speed)

            cmd = Twist()
            cmd.linear.x = vx
            cmd.linear.y = vy
            cmd.angular.z = wz
            self.cmd_pub.publish(cmd)

        except (LookupException, ConnectivityException, ExtrapolationException):
            pass


def main(args=None):
    rclpy.init(args=args)
    node = BalanceController()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
