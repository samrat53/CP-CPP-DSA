#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int l=0;
    while(n!=0)
    {
        n=n/10;
        l++;
    }
    return l;
}
int main()
{
    int n;
    cin>>n;
    if(n>=0) cout<<n;
    else if(n<0)
    {
        int l=count(n);
        if(l==1) cout<<0;
        else if(l==2)
        {
            int a=0,b=0;
            a=n/10;
            b=n%10;
            cout<<max(a,b);
        }
        else if(l>2)
        {
            int a=0,b=0;
            a=n/10;
            int temp=n/100;
            //int temp1=n%100;
            int temp2=n%10;
            b=temp*10+temp2;
            //cout<<b<<endl;
            // int tempf=(temp1-temp2)/10;
            // b=temp*10+tempf;
            cout<<max(a,b);
        }
    }

    return 0;
}