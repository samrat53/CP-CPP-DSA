#include<bits/stdc++.h>
using namespace std;
int main(){
    string st,hello="hello",checker="",original="hello";
    for(auto it:st)
    {
        it=tolower(it);
    }
    int c=0;
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        if (st[i]=='h') 
        c=i;
        break;
    }
    int j=0;
    for(int i=c;i<st.length();i++)
    {
        if(st[i]==hello[j])
        {
            checker.push_back(st[i]);
            hello.erase(j,1);
        }
    }
    if(checker==original) cout<<"YES";
    else cout<<"NO";
    
    return 0;


}