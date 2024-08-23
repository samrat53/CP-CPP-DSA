#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1, int b1, int c1); //defined this function later
    void getData(){
        cout<<"jjksdbhfsbd"<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
    cout<<"done"<<endl;
}
int main(){
    Employee samrat;
    samrat.setData(2,3,4);
    samrat.getData();
    // samrat.a=-1; error since a is private
    return 0;
}  