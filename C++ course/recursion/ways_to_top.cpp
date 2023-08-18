#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int waysToStairs(int n){
    if (n<0) return 0;
    else if(n==0) return 1;

    int ans=waysToStairs(n-1)+waysToStairs(n-2);
    return ans;
}


int main(){
    int n; cin>>n;
    cout<<waysToStairs(n);
    return 0;
}   