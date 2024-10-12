#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int a){
        data1=a;
        cout<<"base 1 constructor called\n";
    }
};

class Base2{
    int data2;
    public:
    Base2(int a){
        data2=a;
        cout<<"base 2 constructor called\n";
    }
};

class Derived: public Base1, public Base2{
    int derived1,  derived2;
    public:
    Derived(int a, int b, int c, int d): Base2(a), Base1(b){ //special syntax for cpp
        derived1=c;
        derived2=d;
        cout<<"derived constructor called\n";
    }
};

int main(){
    Derived sam(1,2,3,4);
   return 0;
}