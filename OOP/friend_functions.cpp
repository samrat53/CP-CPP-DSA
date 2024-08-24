#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

class Complex{
    int a, b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend Complex sumComplex(Complex obj1, Complex obj2);
    void print(){
        cout<<a<<" +i"<<b<<endl;
    }
};
Complex sumComplex(Complex obj1, Complex obj2){ // this is a friend function of Complex class that access the private members of complex
    Complex temp;
    temp.setData((obj1.a+obj2.a),(obj1.b+obj2.b));
    return temp;
}
int main(){
    Complex num1,num2,num3;
    num1.setData(1,2);
    num1.print();
    num2.setData(3,4);
    num2.print();
    num3=sumComplex(num1,num2);
    num3.print();

    return 0;
}