#include <iostream>
#include <iomanip>
#include <cmath>
#include "Kinematics.h"

using namespace std;

double unitConversion(double& number, string unit, string toUnit);

void findFuntion(int funcOpt);

double avgVelocity(double x0, double x2, double t0, double t2);

double avgSpeed(double x, double t0, double t2);

double instantVelocity(double x, double t);

double instantSpeed(double x, double t);

double avgAcceleration(double v0, double v2, double t0, double t2);

double instantAcceleration(double v, double t);

double displacment(double x0, double x2);


int main(){

    cout << "Welcome to our physics one calculator." << endl;
    cout << "Currently can only do 1D kinematic equations" << endl;
    cout << "This works by specifing what you want to find and what/n information you already have" << endl;

return 0;
}

double unitConversion(double& number, string unit, string toUnit){

    if(unit == "cm")
        number *= 100;
    if(unit == "mm")
        number *= 1000;
    if(unit == "mL" || "ml")
        number *= 1000;
    if(unit == "Km" || "km")
        number /= 1000;
    /*
    1m == 39.3
    1cm ==
    */
}


// User selects funtion, and findFunction will call apropriate class
void findFuntion(int funcOpt){
cout << "Enter the corresponding number for the type of problem you would like to solve:"
        "\n1: Kinematics\n2: Newton's Laws\n3: Work and Energy\n>> " << endl;

cin >> funcOpt;

// Chooses problem type - all suboptions are switch inside of each case
switch(funcOpt) {

case 1:
    Kinematics kinObject;
        kinObject.chooseProblem();
break;
case 2: //Call Newton's laws class/ give suboptions
break;
case 3: //Call work and energy class/ give suboptions
break;
case 4: //Call momentum class/ give suboptions
break;

default: // Create a default option that loops the program (DEFAULT IN SUBOPTION LEADS BACK TO ORIGINAL SWITCH)
break;
}




}