#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
 //  cout<<fixed<<setprecision(15)<<
using namespace std;

class Base1{
    protected:
    int base1int;
    public:
    void setBase1Int(int a){
        base1int=a;
    }
    void showMe(){
        cout<<"base 1 show me"<<endl;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void setBase2Int(int a){
        base2int=a;
        cout<<"hui from base 2\n";
    }
    void showMe(){
        cout<<"base 2 show me"<<endl;
    }
};
class Derived: public Base1, public Base2{
    public:
    void show(){
        cout<<"base1int= "<< base1int<<endl;
        cout<<"base2int= "<< base2int<<endl;
        cout<<"sum= "<< base1int+base2int<<endl;
    }

    void showMe(int id){
        // explicitly ambiguity resolving
        if(id==1) Base1::showMe(); // ambiguity resolution operator
        else Base2::showMe();
    }
    // automatic ambiguity resolving:
    void setBase2Int(int a){ // this overwrites the base class base2 defination of setbase2nt since ambiguity is not resolved
        cout<<"hehehehe from derived class"<<endl;
    }

    // this will gave
    // base1int base2int as protected
    // setBase1int() and setBase2Int() as public
};


int main(){
    Derived ob1;
    ob1.showMe(1);
    ob1.showMe(2);
    ob1.setBase2Int(1);
   return 0;
}