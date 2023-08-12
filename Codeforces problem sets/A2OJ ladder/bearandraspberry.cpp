#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c; cin>>n>>c;
    vector<int>rasp;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        rasp.push_back(temp);
    }

    int d=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if ((rasp[i]-rasp[i+1])>d)
        {
            d=rasp[i]-rasp[i+1];
        }
    }
    if(d<=0) cout<<0;
    else cout<<d-c;
    return 0;
}