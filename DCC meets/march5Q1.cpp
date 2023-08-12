#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char>table;
    string hand;
    cin>>hand;
    int c=0;
    for(int i=0;i<5;i++)
    {
        string temp;
        cin>>temp;
        table.insert(temp[0]);
        table.insert(temp[1]);

    }

    char a=hand[0];
    char b=hand[1];
    for(auto it:table)
    {
        if((it==a)||(it==b))
        c++;
    }

    if(c>0)
    cout<<"yes";
    if(c==0)
    cout<<"no";
    
    return 0;
}