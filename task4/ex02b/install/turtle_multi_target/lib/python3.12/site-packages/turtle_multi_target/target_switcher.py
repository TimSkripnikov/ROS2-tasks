import math
import argparse

import rclpy
from geometry_msgs.msg import TransformStamped
from rclpy.node import Node
from tf2_ros import TransformBroadcaster

from turtle_multi_target.turtle_tf2_broadcaster import FramePublisher


class TargetSwitcher(Node):

    def __init__(self, radius, direction):
        super().__init__('target_switcher')

        # self.declare_parameter('radius', 2.0)
        # self.declare_parameter('direction_of_rotation', 1)

        # self.radius = self.get_parameter('radius').get_parameter_value().double_value
        # self.direction = int(self.get_parameter('direction_of_rotation').get_parameter_value().integer_value)

        self.radius = radius
        self.direction = direction

        if self.direction not in [1, -1]:
            self.direction = 1

        self.turtle_broadcasters = [
            FramePublisher('turtle1'),
            FramePublisher('turtle2'),
            FramePublisher('turtle3')
        ]

        self.tf_broadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(0.1, self.broadcast_timer_callback)


    def broadcast_timer_callback(self):
        seconds, _ = self.get_clock().now().seconds_nanoseconds()
        angle = -self.direction * seconds

        self._send_tf('turtle1', 'carrot1',
                      self.radius * math.cos(angle),
                      self.radius * math.sin(angle))

        self._send_tf('turtle3', 'carrot2',
                      self.radius * math.cos(-angle),
                      self.radius * math.sin(-angle))

        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = 'static_carrot'
        t.transform.translation.x = 8.0
        t.transform.translation.y = 2.0
        t.transform.translation.z = 0.0
        t.transform.rotation.w = 1.0

        self.tf_broadcaster.sendTransform(t)


    def _send_tf(self, parent, child, x, y):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = parent
        t.child_frame_id = child
        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = 0.0
        t.transform.rotation.w = 1.0
        
        self.tf_broadcaster.sendTransform(t)


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument("--radius", type=float, default=2.0)
    parser.add_argument("--direction_of_rotation", type=int, default=1)

    args = parser.parse_args()
    
    rclpy.init()
    switcher = TargetSwitcher(args.radius, args.direction_of_rotation)

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(switcher)

    for broadcaster in switcher.turtle_broadcasters:
        executor.add_node(broadcaster)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass

    for broadcaster in switcher.turtle_broadcasters:
        broadcaster.destroy_node()

    switcher.destroy_node()
    rclpy.shutdown()
