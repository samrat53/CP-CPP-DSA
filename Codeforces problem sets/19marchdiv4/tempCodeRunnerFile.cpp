#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)==c) cout<<"+";
        else if((a-b)==c) cout<<"-";
    }   cout<<endl;
    return 0;
}