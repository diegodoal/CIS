//
//  main.cpp
//  CIS
//
//  Created by Diego Domínguez on 9/9/13.
//  Copyright (c) 2013 Diego Domínguez. All rights reserved.
//

#include <iostream>
#include "string"
#include "class.cpp"
using namespace std;
double number =1;


int main(int argc, const char * argv[])
{
    int number=0;
    double &number2 =::number;
    // insert code here...
    cout << "Hello, World!\n";
    cout<<::number<<endl;
    cin>>number;
    cout<<number<<endl;
    {
        int number = 1;
        number = number * 10 + 4;
        cout << "Local number: " << number << endl;
    }
    number2=3;
    cout<<::number<<endl;
    string a= "hola\n";
    cout<<a;
    cin>>a;
    clase objeto(a);
    string b;
    b=objeto.printname();
    b.pop_back();
    cout<<b;
    return 0;
}

