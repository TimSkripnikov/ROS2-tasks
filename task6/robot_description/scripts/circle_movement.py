#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class CirclePublisher(Node):
    def __init__(self):
        super().__init__('circle_publisher')

        self.publisher_ = self.create_publisher(Twist, '/model/robot/cmd_vel', 10)

        self.cmd = Twist()
        self.cmd.linear.x = 5.0
        self.cmd.linear.y = 0.0
        self.cmd.linear.z = 0.0
        self.cmd.angular.x = 0.0
        self.cmd.angular.y = 0.0
        self.cmd.angular.z = -0.1

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.publish_cmd)

    def publish_cmd(self):
        self.publisher_.publish(self.cmd)


def main(args=None):
    rclpy.init(args=args)
    node = CirclePublisher()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
