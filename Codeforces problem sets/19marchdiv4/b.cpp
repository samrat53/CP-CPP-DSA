#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>candyno(n);
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            candyno.push_back(temp);
        }

        vector<int>evens;
        int sumeven=0,sumodd=0;
        for(auto it:candyno)
        {
            if((it%2)==0) sumeven+=it;
            else if((it%2)==1) sumodd+=it;
        }
        if(sumeven>sumodd) cout<<"YES"<<endl;
        else if(sumeven<=sumodd) cout<<"NO"<<endl;
    }
    return 0;
}