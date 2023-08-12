//    *
//   **
//  ***
// ****
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    k=n;
    for (int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            
            if(j>=k)
            cout<<"*";
            else
            cout<<" ";
        }
        k--;
        cout<<endl;
    } 

    return 0;
}