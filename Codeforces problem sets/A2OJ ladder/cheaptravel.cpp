#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(a>double(b/m))
    {
        cout<<min((((n/m)+1)*b),(((n/m)*b) + ((n%m)*a)));
    }
    else
    {
        cout<<n*a;
    }
    return 0;
}