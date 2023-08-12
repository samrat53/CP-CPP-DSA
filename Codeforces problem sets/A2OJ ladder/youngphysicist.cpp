#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
    }
    int sumx=0,sumy=0,sumz=0;
    for(auto it1:x) sumx+=it1;
    for(auto it2:y) sumy+=it2;
    for(auto it3:z) sumz+=it3;
    if(sumx==0 && sumy==0 && sumz==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}