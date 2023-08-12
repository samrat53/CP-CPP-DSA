#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,temp="", ans="";
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            st[i]=tolower(st[i]);
        }
    }
    
    for(int i=0;i<st.length();i++)
    {
        if((st[i]!='a')&&(st[i]!='e')&&(st[i]!='i')&&(st[i]!='o')&&(st[i]!='u')&&(st[i]!='y'))
        temp.push_back(st[i]);
    }

    for(int i=0;i<temp.length();i++)
    {
        ans.push_back('.');
        ans.push_back(temp[i]);
    }
    cout<<ans<<endl;
    return 0;
}