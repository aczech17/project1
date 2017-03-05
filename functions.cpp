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
        cout<<"Output:"<<endl<<changedString(fName)<<" ,,"<<changedString(pseudo)<<"'' "<<changedString(sName);
    }
    string Person::changedString(string s)
    {
        for(int i=0;i<s.size();i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') s[i]='z';
        return s;
    }
