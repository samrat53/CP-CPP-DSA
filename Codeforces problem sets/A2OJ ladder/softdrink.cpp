#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int glass=(k*l)/nl;
    int salt=p/np;
    int slices=c*d;
    int drinks=min(min(glass,salt),slices);

    for(int i=1;i<=drinks;i++)
    {
        if ((i*n)>=drinks)
        {
            if(i*n == drinks) cout<<drinks/n;
            else if((i*n)>drinks) cout<<(i-1);
            break;
        }
    }
    return 0;
}