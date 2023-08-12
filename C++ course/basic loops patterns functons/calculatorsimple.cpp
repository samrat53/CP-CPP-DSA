#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a;
    cin>>b;
    cin>>ch;
    switch(ch)
    {
        case '+': cout<<a+b;
                break;
        
        case '-': cout<<a-b;
                break;
         
        case '*': cout<<a*b;
                break;
         
        case '/': cout<<a/b;
                break;
        
        default: cout<<"haat bsdk";
    }

    return 0;
        

    }
