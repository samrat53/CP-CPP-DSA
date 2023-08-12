#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v; cin>>n>>v;
    set<int>sellerno;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        for(int j=1;j<=k;j++)
        {
            int temp;
            cin>>temp;
            if(v>temp)
            {
                sellerno.insert(i);
            }
        }
    }
    cout<<sellerno.size()<<endl;
    for(auto it:sellerno) cout<<it<<" ";
    return 0;
}