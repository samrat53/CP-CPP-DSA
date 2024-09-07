#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
using namespace std;
class Num{
    public:
    static int count;
    Num(){
        count++;
        cout<<"constructer called\n";
    }
    ~Num(){ // invoked when compiler finds when a particular obj will not be used later
        count--;
        cout<<"destructer called\n";
    }
};
int Num :: count=0;
int main(){
    Num n1;
    cout<<n1.count<<endl;
    {
        cout<<"inside the block\n";
        Num n2;
        Num n3;
        cout<<n1.count<<endl;
        cout<<"exiting the block\n";
        //n2 n3 will not be used outside the function, hence destructer called
    }
    cout<<n1.count<<endl;
   return 0;
}