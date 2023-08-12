#include<bits/stdc++.h>
using namespace std;
using namespace std;
int main(){
    int arr[3]={4,8,6};
    cout<<"the address of arr[0] is: "<<arr<<endl;
    cout<<"the address of arr[0] is: "<<&arr<<endl;
    cout<<"the address of arr[0] is: "<<&arr[0]<<endl;
    cout<<"*arr is: "<<*arr<<endl;
    cout<<"*arr+1 "<<*arr+1<<endl;
    cout<<"*(arr+1) "<<*(arr+1)<<endl;    
    //arr[i]=*(arr+i) formula

    int i=2;
    cout<<"i[arr]="<<i[arr]<<endl; //since this is evaluated as *(i+arr)
    // arr=arr+1
    //symbol table content cannot be changed cannot be done

    //------------CHAR ARRAYS POINTERS--------------------------    

    char ch[6]="abcde";
    char *c=ch;
    cout<<"*c="<<*c<<endl;
    cout<<"c="<<c<<endl;//prints entire string

    char temp='x';
    char *t=&temp;
    cout<<"t="<<t<<endl; //this keeps printing usntill it finds a null character
    return 0;

}