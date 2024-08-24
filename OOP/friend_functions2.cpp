#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
using namespace std;

class c2; // forward declaration since top to bottom read of program doesnot knows what is c2 when it reads line no 14
class c1{
    int num1;
    public:
    void setVal(int num1){
        this->num1=num1;
    }
    friend void add(c1,c2);
};
class c2{
    int num2;
    public:
    void setVal(int num2){
        this->num2=num2;
    }
    friend void add(c1,c2);
};

void add (c1 obj1,c2 obj2){
    cout<<"sum= "<<obj1.num1+obj2.num2<<endl;
}

int main(){
    c1 a1;
    c2 a2;
    a1.setVal(2);
    a2.setVal(4);
    add(a1,a2);
   return 0;
}