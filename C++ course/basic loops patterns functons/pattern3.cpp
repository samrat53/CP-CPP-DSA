// 321
// 321
// 321
#include<bits/stdc++.h>
using namespace std;

int main(){
 
int i,j,n;
i=1;
cin>>n;
while(i<=n){
    j=n;                    //*****OR*********
    while(j>0){           //while(j<=n)
        cout<<j;          //cout<<n-j+1;
        j--;              //j++

    }
    cout<<endl;
    i++;

}
return 0;
}