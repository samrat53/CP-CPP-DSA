#include<bits/stdc++.h>
using namespace std;

int checking(string st1, string st2)
{
    for(int i=0;i<st1.length();i++)
    {
        if(st1[i]!=st2[i])
        {
            if(st1[i]<st2[i])
            return -1;
            else if(st2[i]<st1[i])
            return 1;
        }
    }
    return 0;

}
int main(){
    string st1,st2;
    cin>>st1>>st2;
    for(int i=0;i<st1.length();i++)
    {
        st1[i]=toupper(st1[i]);
        st2[i]=toupper(st2[i]);
    }
    int ans=checking(st1,st2);
    cout<<ans<<endl;
    return 0;
}