#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
    d_error = 0;
    p_error = 0;
    i_error = 0;
}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    //should implement twiddle.
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
}

void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;

}


double PID::getAlpha(){
    return -p_error * Kp - d_error * Kd - i_error*Ki;
}
void PID::twiddle(){
    
}
