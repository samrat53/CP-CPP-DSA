#include<bits/stdc++.h>
using namespace std;

// pass by value creates a copy of the passed value
//int pwr(int base, int exp)
int pwr()// here we created a function named pwr that calculates the power of a number
{
    int base,exp;
    cin>>base;
    cin>>exp;
    int ans=1;
    for(int i=1;i<=exp;i++)
    {
        ans=ans*base;
    }
    return ans;
}

int main()
{
    cout<<"enter base and power respectively"<<endl;
    int ans=pwr();
    cout<<"ANS= "<<ans<<endl;

    cout<<"enter base and power respectively"<<endl;
    ans=pwr();
    cout<<"ANS= "<<ans<<endl;

    cout<<"enter base and power respectively"<<endl;
    ans=pwr();
    cout<<"ANS= "<<ans<<endl;
    return 0;
}