#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math
import time

class SquareMoving(Node):
    def __init__(self):
        super().__init__('circle_moving')
        self.publisher_ = self.create_publisher(Twist, '/robot/cmd_vel', 10)
        
        # Параметры движения (уменьшены для лучшей синхронизации)
        self.linear_speed = 0.2  # уменьшенная линейная скорость
        self.angular_speed = 0.3  # уменьшенная угловая скорость
        self.side_distance = 1.0  # расстояние одной стороны в метрах
        self.turn_angle = math.pi / 2  # 90 градусов в радианах
        
        # Переменные состояния
        self.state = 'MOVE_FORWARD'
        self.last_time = self.get_clock().now()
        self.distance_traveled = 0.0
        self.angle_turned = 0.0
        self.current_side = 0
        
        timer_period = 0.05  # увеличенная частота обновления
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        self.get_logger().info('Square moving node started with improved synchronization')

    def timer_callback(self):
        current_time = self.get_clock().now()
        dt = (current_time - self.last_time).nanoseconds / 1e9
        self.last_time = current_time
        
        twist_msg = Twist()
        
        if self.state == 'MOVE_FORWARD':
            # Движение вперед на заданное расстояние
            twist_msg.linear.x = self.linear_speed
            twist_msg.angular.z = 0.0
            
            # Обновляем пройденное расстояние
            self.distance_traveled += self.linear_speed * dt
            
            if self.distance_traveled >= self.side_distance:
                # Завершаем движение по стороне
                twist_msg.linear.x = 0.0
                self.publisher_.publish(twist_msg)
                
                # Переход к повороту
                self.state = 'TURN'
                self.distance_traveled = 0.0
                self.angle_turned = 0.0
                self.get_logger().info(f'Completed side {self.current_side + 1}, starting turn')
                time.sleep(0.1)  # небольшая пауза между действиями
        
        elif self.state == 'TURN':
            # Поворот на 90 градусов
            twist_msg.linear.x = 0.0
            twist_msg.angular.z = self.angular_speed
            
            # Обновляем пройденный угол
            self.angle_turned += self.angular_speed * dt
            
            if self.angle_turned >= self.turn_angle:
                # Завершаем поворот
                twist_msg.angular.z = 0.0
                self.publisher_.publish(twist_msg)
                
                # Обновляем счетчик сторон
                self.current_side += 1
                
                if self.current_side >= 4:
                    # Завершили квадрат, начинаем новый
                    self.current_side = 0
                    self.get_logger().info('Completed one square, starting new one')
                else:
                    self.get_logger().info(f'Completed turn, starting side {self.current_side + 1}')
                
                # Переход к движению вперед
                self.state = 'MOVE_FORWARD'
                self.distance_traveled = 0.0
                time.sleep(0.1)  # небольшая пауза между действиями
        
        self.publisher_.publish(twist_msg)

def main(args=None):
    rclpy.init(args=args)
    node = SquareMoving()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        # Остановка робота при завершении
        stop_msg = Twist()
        node.publisher_.publish(stop_msg)
        node.get_logger().info('Square moving node stopped')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()