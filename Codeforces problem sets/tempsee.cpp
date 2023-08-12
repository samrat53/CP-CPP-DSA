#include<iostream>
using namespace std;
int main(){

    int t,max;
    cin>>t;
    while(t>0)
    {
        int n,max;
        cin>>n;
        int a[n],sum[n];

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a[i]=temp;
        }
        
        for(int i=1;i<n;i++)
        {
            a[i]=(-1)*a[i];
            a[i-1]=(-1)*a[i-1];
            sum[i]=a[i]+a[i+1];
            a[i]=(-1)*a[i];
            a[i-1]=(-1)*a[i-1];
        }
        max=sum[0];
        for(int i=0;i<n;i++)
        {
            if(sum[i]>max)
            {
                max=sum[i];
            }

        }
        cout<<max;

    t--;
    }
return 0;
}
    
