#include<bits/stdc++.h>
using namespace std;
bool isOdd(int a);
int main(){
    int n; 
    cin>>n;
    
    if(isOdd(n))
    cout<<" The num is odd";
    else
    cout<<" The number is even";
    return 0;
}

bool isOdd(int a){
    //1 if the number is odd
    //0 if the number is even
    int n;
    n=a&1; // if a is odd then a&1=1(i.e true) else if a a&1=0(i.e false)
    return n;
}