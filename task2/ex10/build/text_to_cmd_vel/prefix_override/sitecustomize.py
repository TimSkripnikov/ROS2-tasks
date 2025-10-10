import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/artem/Documents/3_course/robotics/task2/ex10/install/text_to_cmd_vel'
