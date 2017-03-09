#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
using namespace std;
class Person {
    string fName,sName,pseudo;
    void reverseString(string&);
    public:
    void askForName();
    void printName();
    void reverseAllStrings();
};
#endif
