#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>h;
    int maxh=INT_MIN;
    int maxi;
    int minh=INT_MAX;
    int mini;
    int count=0;
    for(int i=0;i<n;i++) 
    {
        int temp;
        cin>>temp;
        h.push_back(temp);
        if(temp>maxh) maxh=temp;
        if(temp<minh) minh=temp;
    }

    for(int i=0;i<n;i++) 
    {
        if(h[i]==maxh)
        {
            maxi=i;
            break;
        }
    }

    //swap maxh
    int i=maxi;
    while((h[0])!=maxh)
    {
        swap(h[i],h[i-1]);
        i--;
        count++;
    }

    for(int i=n-1;i>=0;i--) 
    {
        if(h[i]==minh)
        {
            mini=i;
            break;
        }
    }
    i=mini;
    while((h[n-1])!=minh)
    {
    swap(h[i],h[i+1]);
    i++;
    count++;
    }

    cout<<count;

    return 0;
}