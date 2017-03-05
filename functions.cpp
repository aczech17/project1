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
    cout<<"Output:"<<endl<<fName<<" ,,"<<pseudo<<"'' "<<sName<<endl;
}
void Person::stringToZ(string &s)
{
    for(unsigned int i=0; i<s.size(); i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||
                s[i]=='u' || s[i]=='y') s[i]='z';
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||
                s[i]=='U' || s[i]=='Y') s[i]='Z';
    }
}

void Person::allStringsToZ()
{
    Person::stringToZ(Person::fName);
    Person::stringToZ(Person::sName);
    Person::stringToZ(Person::pseudo);
}
