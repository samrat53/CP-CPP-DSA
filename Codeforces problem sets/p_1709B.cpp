//not accepted. time limit exceeded on test 2

#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define make make_pair
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr,arr+n)
#define sortav sort(height.begin(),height.end())
#define forl(i, j, k) for (int i = j; i < k; i++)
#define forlr(i, j, k) for (int i = j; i >=k ; i--)
#define vin(x, height) for (auto& x : height) cin >> x;
#define endl "\n"
#define MOD 1000000007 
//cout<<fixed<<setprecision(15)<<
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
    int n,m; cin>>n>>m;
    vector<int> height;
    forl(i,0,n)
    {
        int temp; cin>>temp;
        height.push_back(temp);
    }
    int i=0;
    while((i++)<m)
    {
        int s,t,ans=0; cin>>s>>t;
        s=s-1; t=t-1;
        if(t>s)
        {
            for(int j=s;j<t;j++) 
            {
                if(height[j]>height[j+1]) ans=ans+abs(height[j]-height[j+1]);
            }
        }
        else if(t<s)
        {
            for(int j=s;j>t;j--) 
            {
                if(height[j-1]<height[j]) ans=ans+abs(height[j]-height[j-1]);
            }
        }
        cout<<ans<<endl;
    }                 
   
   return 0;
}