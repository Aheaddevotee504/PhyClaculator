#include <iostream>
#include <iomanip>
#include <cmath>
#include "Kinematics.h"
using namespace std;

Kinematics::Kinematics(){
cout << "Choose the corresponding number for the type of problem you would like to solve" << endl;
cout << "1: 1D Kinematics\n2: 2D Kinematics\n(0 to return to main menu)\n>>";

}

void Kinematics::choose2D(int probOpt2){
    switch (probOpt2){
        case 1: //placeholder
            break;
        case 2: //placeholder
            break;
        case 3: //placeholder
            break;
        default: // Go back to 1st kinematics switch
            break;

    }
}

void Kinematics::chooseProblem(){
    int probOpt, probOpt2;

    cin >> probOpt;

    switch (probOpt){
        case 1: // Call 1D Kinematics Function
            break;

        case 2: // List all suboptions in 2D Kinematics
            cin >> probOpt2;
            choose2D(probOpt2);
            break;

        default:{
            //Go back to main switch
            break;
        }
    }
}


