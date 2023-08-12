#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if((n&1)&&(m&1)) cout<<"Akshat"; //odd odd
    else if(((n&1)==0)&&((m&1)==0)) cout<<"Malvika"; //even even
    else if(((n&1)==1) && ((m&1)==0)) //odd even
    {
        if(n>m) cout<<"Malvika";
        else if(n<m) cout<<"Akshat";
    }
    else if(((n&1)==0) && ((m&1)==1)) //even odd
    {
        if(n<m) cout<<"Malvika";
        else if(n>m) cout<<"Akshat";
    }

    return 0;
}