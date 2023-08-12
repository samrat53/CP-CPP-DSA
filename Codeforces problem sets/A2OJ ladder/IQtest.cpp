#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0;i<n;i++) 
    {
        int temp;
        cin>>temp;
        numbers.push_back(temp);
    }
    map<string,int>track;
    for(auto it:numbers)
    {
        if((it%2)==0) track["evens"]++;
        else track["odds"]++;
    }

    if(track["evens"]>track["odds"])
    {
        for(int i=0;i<n;i++)
        {
            if((numbers[i]%2)==1) cout<<i+1;
        }
    }
    if(track["odds"]>track["evens"])
    {
        for(int i=0;i<n;i++)
        {
            if((numbers[i]%2)==0) cout<<i+1;
        }
    }
    return 0;
}