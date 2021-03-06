//
//  Coupled.hpp
//  MotorModel
//
//  Created by Andrew Chen on 9/24/20.
//  Copyright © 2020 Andrew Chen. All rights reserved.
//

#ifndef Coupled_hpp
#define Coupled_hpp
#include "System.hpp"
#include "Controller.hpp"
#include <vector>

class Coupled{
public:
    Coupled(double theta, double theta_dot, double Iq, double Vm, double tor, double tar, double t, double step, int cont);
    void run();
    void printConsole();
    void printFile(std::string fileName);
    
private:
    Pendulum pend;
    Motor mot;
    Controller cont;
    std::vector<double> T;
    double torque;
    std::vector<double> motor_torque;
    double time;
    double dt;
    int cont_select;
    double target;
};

#endif /* Coupled_hpp */
