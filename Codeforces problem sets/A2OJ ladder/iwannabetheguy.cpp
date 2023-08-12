#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,no_x,no_y;
    cin>>n>>no_x;
    set<int>lx;
    set<int>ly;
    //inputs
    for(int i=0;i<no_x;i++)
    {
        int temp;
        cin>>temp;
        lx.insert(temp);
    }
    cin>>no_y;
    for(int i=0;i<no_y;i++)
    {
        int temp;
        cin>>temp;
        ly.insert(temp);
    }
    //net set create
    set<int>net;
    for(auto itr:lx)
    {
        net.insert(itr);
    }
    for(auto itr2:ly)
    {
        net.insert(itr2);
    }
    int count=0;
    for(auto f:net)
    {
        for(int i=1;i<=n;i++)
        {
            if(f==i) count++;
        }
    }
    if(count==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

   return 0;
}