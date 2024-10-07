#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
 //  cout<<fixed<<setprecision(15)<<
using namespace std;
// syntax: class {{derived-class-name}}: {{visibity-mode}} {{base-class1}}, {{visibity-mode}} {{base-class2}}

class Base1{
    protected:
    int base1int;
    public:
    void setBase1Int(int a){
        base1int=a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void setBase2Int(int a){
        base2int=a;
    }
};
class Derived: public Base1, public Base2{
    public:
    void show(){
        cout<<"base1int= "<< base1int<<endl;
        cout<<"base2int= "<< base2int<<endl;
        cout<<"sum= "<< base1int+base2int<<endl;
    }

    // this will gave
    // base1int base2int as protected
    // setBase1int() and setBase2Int() as public
};

int main(){
    Derived samrat;
    samrat.setBase1Int(1);
    samrat.setBase2Int(3);
    samrat.show();
   return 0;
}