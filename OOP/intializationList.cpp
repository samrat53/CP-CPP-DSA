#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
 //  cout<<fixed<<setprecision(15)<<
using namespace std;

class Test{
    public:
    int a,b; // since a is defined first, we have to initialize a forst then b

    // Test(int i, int j): a(i), b(j){} //inside {} enter body of constructor (will run)
    // Test(int i, int j): a(i), b(a+j){} // will work
    // Test(int i, int j): b(j), a(i){} // will workk
    // Test(int i, int j): b(j), a(i+b){} // garbage val of a, since a will be initialized a
};

int main(){
    // Test t1(1,2);
    // cout<<t1.a<< " "<< t1.b<<endl;
   return 0;
}