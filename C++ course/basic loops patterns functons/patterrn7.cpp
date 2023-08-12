// AAA
// BBB
// CCC

#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,ch=65;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<char(ch);
            j++;
        }
        cout<<endl;
        ch++;
        i++;

    }
    return 0;

}