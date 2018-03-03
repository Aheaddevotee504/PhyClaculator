#include <iostream>
#include <iomanip>
#include <cmath>
#include "Kinematics.h"
#include "Problems.h"

using namespace std;

Problems::Problems() {


}

void Problems::findFunction(){

    // User selects function, and constructor will call appropriate class
    int funcOpt;

    cout << "Enter the corresponding number for the type of problem you would like to solve:"
            "\n1: Kinematics\n2: Newton's Laws\n3: Work and Energy\n>> " << endl;

    cin >> funcOpt;

// Chooses problem type - all suboptions are switch inside of each case
    switch(funcOpt) {

        case 1:{
            Kinematics kinObject;
            kinObject.chooseProblem();}
            break;

        case 2:{
            cout << "Call Newton's laws class/ give suboptions";}
            break;

        case 3:{
            cout<< "Call work and energy class/ give suboptions";}
            break;

        case 4:
        {
            cout << "Call momentum class/ give suboptions";}
            break;
        default:{
            cout << " Create a default option that loops the program (DEFAULT IN SUBOPTION LEADS BACK TO ORIGINAL SWITCH)";}
            break;
    }
}