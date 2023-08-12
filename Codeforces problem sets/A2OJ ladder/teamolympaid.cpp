#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i1=0,i2=0,i3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1) i1++;
        if(arr[i]==2) i2++;
        if(arr[i]==3) i3++;
    }
    int w=min(min(i1,i2),i3); cout<<w<<endl;
    if(w!=0)
    {
        int j1=0,k1=0, c=0;
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=j1;j<n;j++)
            {
                for(int k=k1;k<n;k++)
                {
                    if((arr[i]==1) && (arr[j]==2) && (arr[k]==3))
                    {
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                        j1=j+1;
                        k1=k+1;
                        c=1;
                        break;
                    }
                }
                if(c==1) break;
            }
        }
    }
    return 0;
}