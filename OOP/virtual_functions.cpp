#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

class BaseClass{
    public:
    int var_base=1;
    virtual void display(){ //overwritets the defualt behaviour of base class pointer to derived class object
        cout<<"1. var_base= "<<var_base<<endl;
    }
    virtual void pure_virtual()=0; //pure virtual function is made, has tp be redefined in derived class
};
class DerivedClass: public BaseClass{
    public:
    int var_derived=2;
    void display(){
        cout<<"Derived Class\n2. varbase= "<<var_base<<"\n2. var_derived= "<<var_derived<<endl;
    }
    void pure_virtual(){
        cout<<"this is pure virtual function call";
    }
};

int main(){
    BaseClass* bPtr;
    DerivedClass obj_derived;
    DerivedClass* derPtr;
    bPtr=&obj_derived;
    bPtr->display();
    return 0;
}