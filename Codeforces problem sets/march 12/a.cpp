#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if (a<0) a=0-a;
        if (b<0) b=0-b;
        if(a!=0 && b!=0)
        {
            if(a<b)
            {
                cout<<((2*b)-1);
            }
            if(a>b)
            {
                cout<<((2*a)-1);
            }
            if(a==b) cout<<a+b;
        }
        else if(a==0 && b!=0)
        {
            cout<<((2*b)-1);
        }
        else if(b==0 && a!=0)
        {
            cout<<((2*a)-1);
        }
        cout<<endl;    
        
    }
    return 0;
}