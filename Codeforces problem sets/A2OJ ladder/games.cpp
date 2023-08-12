#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int hu[n];
    int gu[n];
    for(int i=0;i<n;i++) cin>>hu[i]>>gu[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if(hu[i]==gu[j]) c++;
        }
    }
    cout<<c;
    return 0;
}