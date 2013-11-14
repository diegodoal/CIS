//
//  class.cpp
//  CIS
//
//  Created by Diego Domínguez on 9/9/13.
//  Copyright (c) 2013 Diego Domínguez. All rights reserved.
//

#include "class.h"

#include <iostream>
using namespace std;

class clase{
    
public:
    clase(string x){
        setname(x);
    }
    void setname(string x){
        name=x;
    }
    string printname(){
        return name;
    }
    
private:
    string name;
    
    
};