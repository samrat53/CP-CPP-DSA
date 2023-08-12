#include<iostream>
using namespace std;
// user define header file: #include "name_of_header" will create a header file but this

int main(){
    int a=4,b=5;
    cout<<"Checking imp operators";
    cout<<"a/b:"<<a/b<<endl; //since int the value is truncated to int part only a=4
    cout<<"a++:"<<a++<<endl; //a=5
    cout<<"++a:"<<++a<<endl; //a=6
    cout<<"a--:"<<a--<<endl; //a=5
    cout<<"--a:"<<--a<<endl; //a=4
    cout<<" ";
    return 0;

}