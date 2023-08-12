#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int f[n],t[n];
    int max=INT_MIN;
    int joy;
    for(int i=0;i<n;i++) cin>>f[i]>>t[i];
    for(int i=0;i<n;i++)
    {
        if(t[i]<=k) joy=f[i];
        else if(t[i]>k) joy=f[i]-(t[i]-k);
        
        if(max<joy) max=joy;
    }
    cout<<max<<endl;
    
    return 0;
}