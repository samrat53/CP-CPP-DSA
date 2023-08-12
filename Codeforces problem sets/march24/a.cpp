#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--)
    {
        int n,t;
        cin>>n>>t;
        vector<int>dur;
        vector<int>ent;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            dur.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            ent.push_back(temp);
        }
        int maxent=INT_MIN;
        int ind=-2;
        for(int i=0;i<n;i++)
        {
            if(dur[i]<=t-i)
            {
                if(ent[i]>maxent)
                {
                    maxent=ent[i];
                    ind=i;
                }
            }
        }
        cout<<ind+1<<endl;
        
    }
    return 0;
}