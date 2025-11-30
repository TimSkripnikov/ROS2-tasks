#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist


def min_distance_in_front_sector(scan: LaserScan, sector_deg=30):
    sector_rad = math.radians(sector_deg)

    angles = []
    distances = []

    angle = scan.angle_min

    for r in scan.ranges:
        if -sector_rad <= angle <= sector_rad:
            if not math.isinf(r) and not math.isnan(r):
                distances.append(r)
                angles.append(angle)

        angle += scan.angle_increment

    if not distances:
        return float('inf')

    return min(distances)


class LidarStopper(Node):
    def __init__(self):
        super().__init__('lidar_stopper')

        self.stop_distance = 1.0
        self.sector_deg = 30

        self.subscription = self.create_subscription(
            LaserScan,
            '/lidar',
            self.scan_callback,
            10
        )

        self.cmd_pub = self.create_publisher(Twist, '/model/sensors/cmd_vel', 10)

    def scan_callback(self, msg: LaserScan):
        min_dist = min_distance_in_front_sector(msg, sector_deg=self.sector_deg)

        twist = Twist()

        if min_dist < self.stop_distance:
            twist.linear.x = 0.0
            twist.angular.z = 0.0
        else:
            twist.linear.x = 0.5
            twist.angular.z = 0.0

        self.cmd_pub.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = LidarStopper()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
