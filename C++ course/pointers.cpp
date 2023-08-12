#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int num=9;
    int *ptr=&num; //pointer datatype should be same as the original data
    //pointers always stores address... hence always has a memory of 8 bytes
    cout<<"adress of num is "<<(&num)<<" "<<ptr<<endl;;

    int *p2=&num;
    (*p2)++;
    cout<<"pr2= "<<p2<<" *p2= "<<*p2<<endl;
    cout<<"after inc num= "<<num;

    return 0;
}