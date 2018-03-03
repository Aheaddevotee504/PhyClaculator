#include <iostream>
#include <iomanip>
#include <cmath>
#include "Kinematics.h"
#include "Problems.h"

using namespace std;



int main(){

    cout << "Welcome to our physics one calculator." << endl;
    cout << "Currently can only do 1D kinematic equations" << endl;
    cout << "This works by specifing what you want to find and what/n information you already have" << endl;
Problems problemObj;
    problemObj.findFunction();

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






