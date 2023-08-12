#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,bits=0,ans=0,i=0;
    cin>>n;
    while(n!=0){
        bits=n&1; // this gives the last bit of a number
        ans=(bits*pow(10,i)) + ans; // saves the answer by reversing the  digits
        n=n>>1; // right shifted n by one place
        i++;

    }
    cout<<"Binary= "<<ans<<endl;

    return 0;
}
