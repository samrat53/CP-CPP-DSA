#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
// this ia a macro: small part of a program replaced with a name and is immutable

void buffer(int &x, int& y, int z=0){
    // this a function that have default argument of z=0
    // if this z is not passed the function will proceed with default value of z
    // always the default argument from the rightmost side
}

inline int getMax(int &a,int &b){
    return (a>b)? a:b;
}

//inline fucntions 
// 1. donot consumes extra space 
// 2. donot create further call stacks overhead
// at max inline functions have 2 lines
// during compilation it replaces the function call with the line saving call stack

int main(){
    int a=0,b=1;
    int ans;
    ans=getMax(a,b);
    cout<<"case 1: "<<ans<<endl;
    a=5; b=2;
    ans=getMax(a,b);
    cout<<"case 2: "<<ans<<endl;
    return 0;
}