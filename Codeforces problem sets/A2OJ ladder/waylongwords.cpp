#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int l=st.length();
        if(l<=10) cout<<st<<endl;
        else if(l>10)
        {
            string shortst="";
            char a=st[0];
            char b=st[l-1];
            int c=int(l-2);
            cout<<a<<c<<b<<endl;

        }
    }
    return 0;
}