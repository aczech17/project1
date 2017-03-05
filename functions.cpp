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
