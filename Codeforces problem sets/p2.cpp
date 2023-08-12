
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a[i]=temp;
        }
        int sum1=a[0];
        int sum=a[0];
        int sum2=0;
        
        char c='x';
        int c1=0;
        for(int i=1;i<n;i++)
        {
            
            if((a[i]<0)&&(a[i-1]<0))
            {c='a';
            -a[i];
            -a[i-1];
            break;
            }
        }
        

        if(c=='a')
        {
            for(int i=1;i<n;i++)
            {
                sum1=sum1+a[i];
            
            }
        }


        
        for(int i=1;i<n;i++)
        {
            if(((a[i]<0)&&(a[i-1]>0))||((a[i]>0)&&(a[i-1]<0)))
            {
                c='b';
                break;
            }
        }

        if(c=='b')
        {
        for(int i=1;i<n;i++)
        {
            sum=sum+a[i];
        }
        }

        for(int i=1;i<n;i++)    
        {
            if((a[i]>0)&&(a[i-1]>0))
            c1++;
        }

        
             
        if(c1==(n-1))
        {
            -a[0];
            -a[1];
            sum2=a[0];
            for(int i=1;i<n;i++)
        {
            sum2=sum2+a[i];
        }

        }
        cout<<max(sum,sum1,sum2);
        



        
        t--;
    }
    
    return 0;
    
    
}

