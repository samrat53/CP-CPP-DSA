#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int power(int a, int b){
    if(b==0) return 1;
    if (b==1) return a;
    int ans=power(a,b/2);

    if(b&1) return a* ans*ans; //odd
    else return ans*ans;
}
int main(){
    //a^b if 
    // b is even then ans= a^(b/2) * a^(b/2) =square(a.(b/2))
    // if b is odd then ans= a* a^(b/2) * a^(b/2) =a*square(a.b/2)
    int a, b;
    cin>>a>>b;
    cout<<power(a,b);

    return 0;
}