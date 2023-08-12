// 11111
// 22222
// 33333
// 44444
// 55555
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cin>>n;
    i=1;

    while (i<=n){
        j=1;
        while (j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;

}