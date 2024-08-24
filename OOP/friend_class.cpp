#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
using namespace std;

//forward declaration
class Complex;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumRealPart(Complex obj1,Complex obj2);
    int sumComplexPart(Complex,Complex);
};
class Complex{
    int a, b;
    // individually declaring functions as friends
    friend int Calculator :: sumRealPart(Complex obj1,Complex obj2);
    friend int Calculator :: sumComplexPart(Complex obj1,Complex obj2);

    friend class Calculator; // all the members of calculator class are friend functions of complex class
    
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void print(){
        cout<<a<<" +i"<<b<<endl;
    }
};

int Calculator :: sumRealPart(Complex obj1,Complex obj2){
    return (obj1.a+obj2.a);
}
int Calculator :: sumComplexPart(Complex obj1,Complex obj2){
    return (obj1.b+obj2.b);
}

int main(){
    Complex num1,num2;
    num1.setData(10,2);
    num2.setData(4,5);
    Calculator calc;
    int res=calc.sumRealPart(num1,num2);
    cout<<"Real = "<<res<<endl;
    int resComplex=calc.sumComplexPart(num1,num2);
    cout<<"Complex part sum= "<<resComplex<<endl;
    return 0;
}