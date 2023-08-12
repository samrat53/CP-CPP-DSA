#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,i=0,n,t=0;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(i<n){
        t=a+b;
        cout<<t<<" ";
        a=b;
        b=t;
        i++;
    }
    return 0;

}