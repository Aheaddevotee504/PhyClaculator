#include <iostream>
#include <iomanip>
using namespace std;

double unitConversion(double& number, string unit, string toUnit);

void findFuntion(string funcName);

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
