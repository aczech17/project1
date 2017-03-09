#include "functions.h"

    void Person::askForName()
    {
        cout<<"Write name:"<<endl;
        cin>>fName;
        cout<<"Write surname:"<<endl;
        cin>>sName;
        cout<<"Write pseudonym:"<<endl;
        cin>>pseudo;
    }
    void Person::printName()
    {
        cout<<"Output:"<<endl<<fName<<" "<<sName<<" ,,"<<pseudo<<"'' "<<endl;
    }
    void Person::reverseString(string &s)
    {
        for(int i=0,j=s.size()-1;i<j;i++,j--)
            swap(s[i],s[j]);
    }
    void Person::reverseAllStrings()
    {
        reverseString(fName);
        reverseString(sName);
        reverseString(pseudo);
    }
