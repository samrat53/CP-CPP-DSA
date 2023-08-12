#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>n>>s;
    vector<int>dragst(n);
    vector<int>bonus(n);
    for (int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        dragst.push_back(temp);
        cin>>temp;
        bonus.push_back(temp);
    }
    for(int k=0;k<dragst.size();k++)
    {
    for (int i=0;i<dragst.size();i++)
    {
        for(int j=0;j<dragst.size();j++)
        {
            if(dragst[j]<s)
            {
                s=s+bonus[j];
                dragst.erase(dragst.begin()+i);
                bonus.erase(bonus.begin()+i);
            }

        }
    }
    }
    for(auto it:dragst) cout<<it<<" ";
    cout<<endl;
    if(dragst.empty()==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}