from glob import glob
import os

from setuptools import find_packages, setup

package_name = 'turtle_multi_target'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
            glob(os.path.join('launch', '*.launch.py'))),
        (os.path.join('share', package_name, 'rviz'),
            glob(os.path.join('rviz', '*.rviz'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='artem',
    maintainer_email='a.skripnikov@g.nsu.ru',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle_tf2_broadcaster = turtle_multi_target.turtle_tf2_broadcaster:main',
            'turtle_controller = turtle_multi_target.turtle_controller:main',
            'target_switcher = turtle_multi_target.target_switcher:main',
        ],
    },
)
