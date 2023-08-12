
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int c;
    cin>>t;
    while(t>0)
    {
        int n,sum=0;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a[i]=temp;
            sum=+temp;

        }
        for(int i=1;i<n;i++)
        {
            if((a[i]<0)&&(a[i-1]<0))
            {
                c=1;
                break;
            }
            else if((a[i]>0)&&(a[i-1]>0))
            {
                c=2;
            }
        }
        if(c==1)
        sum=sum+4;
        if(c==0)
        sum=sum-4;

        cout<<sum;

        

        

        t--;
    }
    
    
    return 0;
    
    
}

