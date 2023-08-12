#include<bits/stdc++.h>
using namespace std;

void fibonachi(int n){
    int a=0, b=1,c;
    for (int i=1;i<=(n-2);i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<n<<"th term is: "<<c<<endl;
    return ;

}
int main(){
    int t;
    cout<<"enter n"<<endl;
    cin>>t;
    fibonachi(t);
}