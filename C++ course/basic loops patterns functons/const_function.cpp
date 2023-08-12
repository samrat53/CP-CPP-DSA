// MAKING A VALUE CONSTANT FOR A VARIABLE
#include <iostream>

using namespace std;

int main(){
    
    const int a=34;
    a=a+1; // this will give a error cuz "const int a=34" gives constant value to variable
    cout<<"a+1= "<<a<<endl;
    
    
    return 0;

}