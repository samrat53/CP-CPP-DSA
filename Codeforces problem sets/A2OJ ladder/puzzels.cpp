#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>f(m);
    vector<int>mini;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        f.push_back(temp);
    }
    sort(f.begin(),f.end());

    for(int i=0;i<n;i++)
    {
        mini.push_back(f[i]);
    }

    for(int i=0;i<(m-n);i++)
    {
        vector<int>temp;
        for(int j=i;j<(i+n);j++)
        {
            temp.push_back(f[j]);
        }
        if((temp[n]-temp[0])<(mini[n]-mini[0]))
        {
            mini=temp;
        }
    }

    cout<<mini[0]-mini[n]<<endl;

    return 0;
}