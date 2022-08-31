#include<bits/stdc++.h>
using namespace std;
class PID{
    public:
        double kp = 0.0; //比例系数
        double ki = 0.0; //积分系数
        double kd = 0.0; //微分系数
        double max_out = 0.0; //最大输出
        double max_iout = 0.0; //最大积分输出
        double set_value = 0.0; //目标值
        double feedback = 0.0; //反馈值
        double error = 0.0; //误差值
        double last_error = 0.0; //上一次的误差值
        double Pout = 0.0; //比例输出
        double Iout = 0.0; //积分输出
        double Dout = 0.0; //微分输出
        double out = 0.0; //总输出
        PID(double kp_in, double ki_in, double kd_in, double max_iout_in, double max_out_in);
        double pid_calc(double set_value,double feedback);
};
PID::PID(double kp_in, double ki_in, double kd_in, double max_iout_in, double max_out_in) {
    kp=kp_in;
    ki=ki_in;
    kd=kd_in;
    max_out=max_out_in;
    max_iout=max_iout_in;
};
double PID::pid_calc(double set_value, double feedback){
    //请将这段代码进行完善
    //将self中的目标值更新
        
    //将self中的反馈值更新
        
    //将self中的上次误差值更新
        
    //计算当前self中的误差值
        
    //计算当前self中的Pout
        
    //计算当前self中的Iout
        
    //将self中的Iout根据max_iout进行限制
        
    //计算self中的Dout
        
    //计算self中的out
        
    //将self中的out 根据max_out进行限制
    return out;
}
class  robot_vectory{
    public:
        double first_param=0.1;
        double second_param=0.1;
        void run(PID pid, double end_time);

};
void robot_vectory::run(PID pid,double end_time){
            srand((unsigned)time(NULL));
            vector <double> run_time_list;
            vector<double> run_vectory_list;
            vector<double> run_set_value_list;
            double set_value=1.0;
            double now_vectory=0.0;
            double last_vectory=0.0;
            double last_last_vectory=0.0;
            double run_time=0.0;
            double period=0.0;
            double a=a = pow(period,2) / (first_param + second_param * period + pow(period,2));
            double b = (2*first_param + second_param * period) / (first_param + second_param * period + pow(period,2));
            double c = -first_param / (first_param + second_param * period + pow(period,2));
            while (run_time<end_time)
            {
                double pid_out=pid.pid_calc(set_value,now_vectory+(rand() / double(RAND_MAX)-0.1)*0.1);
                last_last_vectory=last_vectory;
                last_vectory=now_vectory;
                now_vectory=a*pid_out+b*last_vectory+c*last_last_vectory;
                run_time_list.push_back(run_time);
                run_vectory_list.push_back(now_vectory);
                run_set_value_list.push_back(set_value);
                run_time+=period;
            }
            //请使用c++绘图库进行绘图
            // (run_time_list, run_vectory_list)

            // (run_time_list, run_set_value_list)

        }
int main(){
    PID vectory_pid(0.0,0.0,0,1000,1000);
    robot_vectory robot;
    robot.run(vectory_pid,10);
    return 0;
}