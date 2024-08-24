#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
 //  cout<<fixed<<setprecision(15)<<
using namespace std;
class Employee{
    int id, salary;
    public:
    void setId(){
        cout<<"enter id"<<endl;
        cin>>id;
        salary=112;
    }
    void getId(){
        cout<<"id is "<<id<<endl;
    }
};

class Complex{
    int a, b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void setDataBySum(Complex obj1, Complex obj2){ //passing objects as function args
        a=obj1.a+obj2.a;
        b=obj1.b+obj2.b;
    }
    void print(){
        cout<<a<<" +i"<<b<<endl;
    }
};
int main(){
    Employee fb[4]; //array of object
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }

    Complex num1,num2,num3;
    num1.setData(1,2);
    num1.print();
    num2.setData(3,4);
    num2.print();
    num3.setDataBySum(num1,num2);
    num3.print();
    return 0;
}