#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>exp;
    for(int i=0;i<n;i++)
    {
        int temp; cin>>temp;
        exp.push_back(temp);
    }
    int mstexp=0;
    for(auto it:exp) 
    {
        if(it<=(5-k)) 
        mstexp++;
    }
    int c=0;
    if(mstexp>=3)
    {
        while (mstexp>=0)
        {
            mstexp-=3;
            c++;
        }
        cout<<c-1;
    }
    else cout<<0;

    return 0;
}