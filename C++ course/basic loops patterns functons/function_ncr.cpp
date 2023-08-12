#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fac=1;
    for (int i=1;i<=num;i++){
        fac=fac*i;
    }
    return(fac);

}

int nCr(int n,int r){
    int nfac=factorial(n);
    int rfac=factorial(r);
    int n_rfac=factorial(n-r);
    int ans=nfac/(rfac*n_rfac);
    return(ans);
}

int main(){
    int n, r;
    cin>>n>>r;
    cout<<"Ans: "<<nCr(n,r);
    
}