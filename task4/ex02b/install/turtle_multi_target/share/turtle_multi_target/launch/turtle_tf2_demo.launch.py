from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'switch_threshold',
            default_value='1.0'
        ),

        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),

        Node(
            package='turtle_multi_target',
            executable='turtle_tf2_broadcaster',
            name='broadcaster1',
            parameters=[
                {'turtlename': 'turtle1'}
            ]
        ),

        Node(
            package='turtle_multi_target',
            executable='turtle_tf2_broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
        ),

        Node(
            package='turtle_multi_target',
            executable='turtle_tf2_broadcaster',
            name='broadcaster3',
            parameters=[
                {'turtlename': 'turtle3'}
            ]
        ),

        Node(
            package='turtle_multi_target',
            executable='turtle_controller',
            name='turtle_controller',
            parameters=[
                {'switch_threshold': LaunchConfiguration('switch_threshold')}
            ]
        ),
    ])
