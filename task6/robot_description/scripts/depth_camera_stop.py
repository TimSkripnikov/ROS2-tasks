#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py.point_cloud2 import read_points
from geometry_msgs.msg import Twist
import numpy as np


def min_distance_in_window(pc: PointCloud2, window_size=10):
    distances = []

    width = pc.width
    height = pc.height

    cx = width // 2
    cy = height // 2

    half = window_size // 2

    distances = []

    points = read_points(pc, field_names=("x","y","z"), skip_nans=True)

    for v in range(cy - half, cy + half):
        for u in range(cx - half, cx + half):
            point = points[v*height+u]

            x, y, z = point

            if x > 0:
                distances.append(x)

    return min(distances) if distances else float('inf')


class DepthStopper(Node):
    def __init__(self):
        super().__init__('depth_stopper')

        self.stop_distance = 1.0
        self.window_size = 10

        self.subscription = self.create_subscription(
            PointCloud2,
            '/depth_camera/points',
            self.pc_callback,
            10
        )

        self.cmd_pub = self.create_publisher(Twist, '/model/sensors/cmd_vel', 10)

    def pc_callback(self, msg: PointCloud2):
        min_dist = min_distance_in_window(msg, window_size=self.window_size)

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
    node = DepthStopper()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
