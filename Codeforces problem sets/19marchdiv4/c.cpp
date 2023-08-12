#include<bits/stdc++.h>
using namespace std;
int checker(int n, string s)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=s[i];
        if(temp>='a' && temp<='z')
        {
            if(s[i-1]=='1')
            {
                for(int j=i;j<n;j++) 
                if(s[j]==temp) s[j]='0';
            }
            else if(s[i-1]=='0')
            {
                for(int j=i;j<n;j++) 
                if(s[j]==temp) s[j]='1';
            }
        }

    }

    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1]) return 1;
    }
    return 0;
}


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string st,s;
        cin>>st;
        s=st;
        char temp;
        temp=s[0];
        s[0]='1';
        int c1=0,c2=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==temp) s[i]='1';
        }
        c1=checker(n,s);

        temp=st[0];
        st[0]='0';
        for(int i=1;i<n;i++)
        {
            if(st[i]==temp) st[i]='0';
        }
        c2=checker(n,st);
        
        if(c1==0 || c2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(c1==1 || c2==1)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}