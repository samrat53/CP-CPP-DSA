#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char>st;
    char temp;
    int count=0;
    do
    {
        cin>>temp;
        st.insert(temp);
    }
    while(temp!='}');
    for(auto it:st)
    {
        if(it>='a' && it<='z') count++;
    }
    cout<<count<<endl;
    return 0;
}