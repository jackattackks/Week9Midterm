//
//  main.cpp
//  Week9Midterm2
//
//  Created by Jackie on 3/20/21.
//

#include <iostream>
using namespace std;
#include <string>

class Whole {
private:
    string wholeName;
public:

    void testDefault (){
        wholeName = "None ";

        cout << "In whole default constructor." << endl;
        cout << "Called default constructor." << endl;
        cout << "Contents in name: " << wholeName << endl;
    };
    
    void testParm(string name){
        wholeName = name;
        cout << wholeName;
        cout << " in whole parm constructor" << endl;
        cout << "called parm constructor." << endl;
        cout << "Contents in name: " << wholeName << endl;
    }
    
    void getName(){
        cout << wholeName << endl;
    }
    
    ~Whole(){
        cout << "Called destructor." << endl;
        cout <<"Contents in variable: " << wholeName << endl;
    }
};

class Part {
    void constructor(){
        cout << "In default part constructor." << endl;
 
    }
    
    ~Part(){
        //nothing in here, per instructions
    }
};


//MAIN FUNCTION HERE

int main() {
    cout <<"Name: Jackie Ocaña - Midterm Part 2 - March 16, 2021" << endl;
    cout << endl;
    
    Whole W1;
    W1.testDefault();
    W1.~Whole();
    

    cout << endl;
    
    Whole W2;
    W2.testParm("W2");
    W2.~Whole();
    

    cout << endl;
    
    cout << "Dot notation result: ";
    W1.getName();
    cout << "Dot notation result: ";
    W2.getName();
    cout << endl;
    
    cout << "Destructors get called again." << endl;
    return 0;
}
