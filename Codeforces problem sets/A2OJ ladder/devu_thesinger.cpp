#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>songs(n);
    int mintime=0,sum=0;
    for(int i=0;i<n;i++)
    {
        int temp; cin>>temp;
        songs.push_back(temp);
        sum+=temp;
    }
    mintime=sum+(10*(n-1));
    if(mintime>d) cout<<-1;
    else
    {
        cout<<(((d-mintime)/5)+(2*(n-1)));
    }
    return 0;
}