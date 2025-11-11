import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/artem/Documents/3_course/robotics/task4/ex02b/install/turtle_multi_target'
