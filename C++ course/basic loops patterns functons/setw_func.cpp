#include <iostream>
using namespace std;

#include <iomanip>
//always import iomanip to use manupulators like setw

int main (){
    int a=3,b=33,c=333,d=3333;
    cout<<"the value of a without setw function is "<<a<<endl;
    cout<<"the value of b without setw function is "<<b<<endl;
    cout<<"the value of c without setw function is "<<c<<endl;
    cout<<"the value of d without setw function is "<<d<<endl;
    cout<<""<<endl;

    cout<<"the value of a with setw function is "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw function is "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw function is "<<setw(4)<<c<<endl;
    cout<<"the value of d with setw function is "<<setw(4)<<d<<endl;
    //setw(4) takes width of 4 characters always,
    //could be used to print in right allingment

    
    return 0;
}