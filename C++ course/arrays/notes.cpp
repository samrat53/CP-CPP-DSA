#include<bits/stdc++.h>
using namespace std;
int main(){
    // to get total size of an array we use: sizeof(arrayname)/sizeof(datatype of the array)

    int a[10];
    cout<<"The size of the array is"<<sizeof(a)<<" which gives total memory taken by the array"<<endl;
    cout<<"The size of the the datatype is "<<sizeof(int)<<endl;
    cout<<"The number of elements in the array is "<<sizeof(a)/sizeof(int)<<endl;
    //this gives the number of elements in the array irrespective of wheather all the elements are entered or not

    return 0;
}
