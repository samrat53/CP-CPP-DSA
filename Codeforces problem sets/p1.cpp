//yet another promotion 1793A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b,n,m;
        cin>>a>>b;
        cin>>n>>m;
        int coins=0,rem=0,q=0;
        if(n>=m+1)
        {
            rem=n%(m+1);
            q=n/(m+1);
            
            if(b<a)
            {
                coins=(a*q*m)+(b*rem);
                cout<<coins;
            }
            else
            {
                coins=(a*q*m)+(a*rem);
                cout<<coins;
            }

        }
        else
        {
            if(a>b)
            {
                coins=n*b;
                cout<<coins;
            }
            else
            {
                coins=n*a;
                cout<<coins;
            }
        }
        t--;
        cout<<endl;
    }

    return 0;

}
