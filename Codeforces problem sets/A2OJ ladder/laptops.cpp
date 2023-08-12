#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;;
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>> temp; a.push_back(temp);
        cin>> temp; b.push_back(temp);
    }

    for(int i=1;i<n;i++)
    {
        if ((a[i]>a[i-1])&&(b[i]<b[i-1])) 
        count++;
    }

    if(count==n-1) cout<<"Happy Alex";
    else cout<<"Poor Alex";
    return 0;
}