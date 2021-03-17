//
//  Whole.cpp
//  Week9Midterm
//
//  Created by Jackie on 3/16/21.
//

#include "Whole.hpp"
#include <iostream>
using namespace std;
#include <string>



    void Whole::default2(){
        wholeName = "None";
        cout << "In whole default constructor." << endl;}
//        cout << "Called default constructor." << endl;
//        cout << wholeName << endl;

    void Whole::parmCon (string n){
        wholeName = n;
        cout << wholeName << " in Whole parm constructor" << endl;
    }
    string Whole::getName(){
        return wholeName;
    }

    Whole::~Whole(){
//        cout << "Called destructor." << endl << wholeName << endl;
    }
