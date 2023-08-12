#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int ans,loopans=0;
        for(int i=2;i<=(n-2);i++) 
        loopans+=i*2;
        
        ans=(1*3)+loopans+(n-1)*1+(n*4);
        cout<<ans<<endl;
    }
    return 0;
}