import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/artem/Documents/3_course/robotics/task5/ex04/install/circle_moving'
