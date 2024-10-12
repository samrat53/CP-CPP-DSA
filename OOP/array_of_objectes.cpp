#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class ShopSync{
    int a, b;
    public:
    void set(int aw,int bw){
        a=aw;
        b=bw;
    }
    void getData(){
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
};


int main(){
    int n; cin>>n;
    ShopSync* ptr=new ShopSync[n]; //array of objects 
    for(int i=0;i<n;i++){
        cout<<"enter val a and b for "<<i<<"th time\n";
        int a, b;
        cin>>a>>b;
        (ptr+i)->set(a,b);  //-> dereferencing operator
    }
    for(int i=0;i<n;i++){
        (ptr+i)->getData();
    }
    return 0;
}