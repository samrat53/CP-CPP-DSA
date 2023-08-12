#include<bits/stdc++.h>
using namespace std;
int lucky(int n,int arr[],int size)
{
    for(int i=0;i<12;i++)
    {
        int j=0;
        while((arr[i]*j)<1000)
        {
            j++;
            if((n%(arr[i]*j))==0) return 1;
        }
    }
    return 0;
}
int main(){
    int n,t,i=1;
    cin>>n;
    int size=12;
    int arr[12]={4,7,44,47,74,77,444,447,477,777,774,744};
    int test=lucky(n,arr,size);
    if(test==1) cout<<"YES";
    else if(test==0) cout<<"NO";
    return 0;
}