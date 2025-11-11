import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    DeclareLaunchArgument('radius', default_value='2.0')
    DeclareLaunchArgument('direction_of_rotation', default_value='1')

    demo_nodes = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('turtle_carrot'), 'launch'),
            '/turtle_tf2_demo.launch.py']),
        launch_arguments={'target_frame': 'carrot1'}.items(),
    )
    
    return LaunchDescription([
        demo_nodes,

        Node(
            package='turtle_carrot',
            executable='dynamic_frame_tf2_broadcaster',
            name='dynamic_broadcaster',
            parameters=[
                {'radius': LaunchConfiguration('radius')},
                {'direction_of_rotation': LaunchConfiguration('direction_of_rotation')}
            ]
        ),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', os.path.join(
                get_package_share_directory('turtle_carrot'),
                'rviz',
                'carrot.rviz'
            )]
        )
    ])
