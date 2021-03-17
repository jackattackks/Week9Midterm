//
//  Whole.hpp
//  Week9Midterm
//
//  Created by Jackie on 3/16/21.
//

#ifndef Whole_hpp
#define Whole_hpp
#include <string>
#include <stdio.h>
using namespace std;

class Whole {
private:
    string wholeName;
public:
    void default2();
    void parmCon (string n);
    string getName();
    ~Whole(void);
};

#endif /* Whole_hpp */
