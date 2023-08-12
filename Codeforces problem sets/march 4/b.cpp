#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) 
        {cin>>arr[i];}
        int c=0;
        
        for(int i=0;i<n-1;i++) 
        {
            if((arr[i+1]%arr[i])==0)
            c++;
        }

        if(c==0)
        {
            for(int i=0;i<n;i++) 
            cout<<arr[i]<<" ";
            cout<<endl;
            t--;
            continue;
        }
        else if(c>0){
            int q=2*n;
            while(q>0)
            {
                for(int i=0;i<n-1;i++)
                {
                    if((arr[i+1]%arr[i])==0)
                    {
                        if((arr[i]==1)&&(arr[i+1]%2==0)) 
                        {
                            arr[i]++;
                            arr[i+1]++;
                            q=q-2;
                        }

                        else if((arr[i]==1)&&((arr[i+1]%2)!=0)) 
                        {
                            arr[i]++;
                            q--;
                        }
                    }
                }
                for(int i=0;i<n-1;i++)
                {
                    if((arr[i+1]%arr[i])==0)
                    {
                        arr[i]++;
                        q--;
                    }
                }
                c=0;
                for(int i=0;i<n-1;i++) 
                {
                    if((arr[i+1]%arr[i])==0)
                    c++;
                }
                if(c==0) break;
                else if(c>0) continue;

                
            }
        }

        for(int i=0;i<n;i++) 
        cout<<arr[i]<<" ";
        cout<<endl;
        t--;

    }
    return 0;

}