#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>net;
    for(int i=1;i<=n;i+=2) net.push_back(i);
    for(int i=2;i<=n;i+=2) net.push_back(i);
    cout<<net[k-1];
    return 0;
}
//memory limit exceeded