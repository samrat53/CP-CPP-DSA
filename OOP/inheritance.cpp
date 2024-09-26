#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
 //  cout<<fixed<<setprecision(15)<<
using namespace std;

class Employee{ //base class
    float salary;
    public:
    int id;
    Employee(){cout<<"hello"<<endl;}
    Employee(int id){
        this->id=id;
        this-> salary=98.00;
    }
};
// syntax: class {{derived-class-name}}: {{visibity-mode}} {{base-classs-name}}
//derived class
class Programmer: Employee{
    public:
    int languageCode;
    void getData(){
        cout<<id<<endl;
    }
    Programmer(int userId){
        id=userId;
        cout<<"hello boy\n";
        this->languageCode=9;
    }
};

int main(){
   Employee sam(1),rat(2);
   Programmer skillF(10);
   cout<<skillF.languageCode<<endl;
//    cout<<skillF.id<<endl; will not work since the derived class is inheried privately
   return 0;
}