#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++) 
        {
            int temp;
            cin>>temp;
            arr[i]=temp;
            arr2[i]=temp;
        }

        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            l=l-1;
            r=r-1;
            for(int i=l;i<=r;i++) arr[i]=k;
            int sum=0;
            for(int i=0;i<n;i++) sum+=arr[i];
            if((sum%2)==0) cout<<"NO"<<endl;
            else if((sum%2)==1) cout<<"YES"<<endl;
            //rebuild old arr
            for(int i=0;i<n;i++) 
            {
                int temp=arr2[i];
                arr[i]=temp;
            }
            
        }
    }
    return 0;
}