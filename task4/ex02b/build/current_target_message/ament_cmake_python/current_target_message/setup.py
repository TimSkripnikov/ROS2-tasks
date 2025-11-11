from setuptools import find_packages
from setuptools import setup

setup(
    name='current_target_message',
    version='0.0.0',
    packages=find_packages(
        include=('current_target_message', 'current_target_message.*')),
)
