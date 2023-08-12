#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long int>arr;
        for(int i=0;i<n;i++)
        {
            int temp;cin>>temp;
            arr.push_back(temp);
        }
        long long int prod=INT_MIN;
        long long int ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(arr[i]*arr[j]>prod)
                {
                 ans=arr[i]*arr[j];
                 prod=ans;   
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}