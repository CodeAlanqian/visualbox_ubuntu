import numpy as np
from robot_control_back import *

class PID:
    kp = 0.0 #比例系数
    ki = 0.0 #积分系数
    kd = 0.0 #微分系数
    max_out = 0.0 #最大输出
    max_iout = 0.0 #最大积分输出
    set_value = 0.0 #目标值
    feedback = 0.0 #反馈值
    error = 0.0 #误差值
    last_error = 0.0 #上一次的误差值
    Pout = 0.0 #比例输出
    Iout = 0.0 #积分输出
    Dout = 0.0 #微分输出
    out = 0.0 #总输出
    def __init__(self, kp, ki, kd, max_iout, max_out):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.max_out = max_out
        self.max_iout = max_iout
    
    def pid_calc(self, set_value, feedback):
        '''
        请将这段代码进行完善
        '''
        #将self中的目标值更新
        
        #将self中的反馈值更新
        
        #将self中的上次误差值更新
        
        #计算当前self中的误差值
        
        #计算当前self中的Pout
        
        #计算当前self中的Iout
        
        #将self中的Iout根据max_iout进行限制
        
        #计算self中的Dout
        
        #计算self中的out
        
        #将self中的out 根据max_out进行限制
        
        return self.out

'''
#请整定参数，分别为比例系数,积分系数,微分系数,最大积分输出,最大输出 
'''
vectory_pid = PID(0.0, 0.0, 0, 1000, 1000)

if __name__ == "__main__":
    #实例化一个机器人速度类
    robot = robot_vectory()
    #第一个参数为PID类， 第二个参数为停止时间
    robot.run(vectory_pid, 10)
        
    