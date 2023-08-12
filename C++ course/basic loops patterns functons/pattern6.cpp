// 1
// 21
// 321
// 4321
// hint: the first number to be printed in each row is always the row index

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n, k;
    i=1; //consider i as row index
    cin>>n;
    while(i<=n)
    {
        //k=i;
        j=1;
        while(j<=i){
            cout<<i-j+1<<" "; 
            //k--;
            j++;
        }
        cout<<endl;
        i++;
    
    }
    
    return 0;
}
