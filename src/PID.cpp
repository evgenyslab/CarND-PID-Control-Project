#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    e_d = 0;
    e_p = 0;
    e_i = 0;
}

void PID::UpdateError(double cte) {

    e_d = cte - e_p;
    e_p = cte;
    e_i += cte;
}

double PID::TotalError() {
    return -this->Kp*e_p - this->Kd*e_d - this->Ki*e_i;
}

