#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define endl "\n";

void update(int& num){ //pointing to the same address
    num+=10;
}
int main(){
    int i =5;
    int& j=i; //j points to the same memory space. same memory different names
    cout<<i<<endl;
    cout<<j<<endl;

    i++;
    cout<<j<<endl;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;

    update(i);
    cout<<"after update: "<<i<<endl;
    
    return 0;
}