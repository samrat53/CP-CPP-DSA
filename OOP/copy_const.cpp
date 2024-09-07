#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
 //  cout<<fixed<<setprecision(15)<<
using namespace std;
class Number{
    int a;
    public:
    Number(){};
    Number(int num){
        this->a=num;
    }
    Number(Number &obj){
        cout<<"Copy const"<<endl;
        this->a=obj.a; 
    }
    void display(){
        cout<<"number= "<<a<<endl;
    }
};

int main(){
    Number x,y,z(10),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); //z1 is a new object having z1.a=z.a
    z1.display();
    z2=z; //copy consst not called
    Number z3=z; //copy const invoked
    
    return 0;
}