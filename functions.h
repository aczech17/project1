#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
using namespace std;
class Person {
    string fName,sName,pseudo;
    void stringToZ(string&);
    public:
    void allStringsToZ();
    void askForName();
    void printName();
};
#endif
