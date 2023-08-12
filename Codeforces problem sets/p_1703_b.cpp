#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define make make_pair
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr,arr+n)
#define sortav sort(v.begin(),v.end())
#define forl(i, j, k) for (int i = j; i < k; i++)
#define forlr(i, j, k) for (int i = j; i >=k ; i--)
#define vin(x, v) for (auto& x : v) cin >> x;
#define endl "\n"
#define MOD 1000000007 
//  cout<<fixed<<setprecision(15)<<
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int T;
   cin >> T;
   while (T--)
   {
        int n; cin>>n;
        string st; cin>>st;
        set<char>unique;
        for(auto& ch:st) unique.insert(ch); 
        cout<<(n+ unique.size())<<endl;      
   }
   return 0;
}