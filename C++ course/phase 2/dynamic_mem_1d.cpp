#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}
int main(){
    //arr[10] static memory allocation. stack memory allocation
    //new dynamic----heap memory allocation
    // new char returns a pointer. we cannt name it directly
    // static memory get released automaticaly. but dynamic has to be freed manually using delete keyword
    char* ch = new char; //dynamically creating a char

    delete ch;

    //variable size array and talking input
    int n;
    cin>>n;
    int* arr=new int[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=getSum(arr,n);
    cout<<"sum= "<<ans<<endl;

    delete []arr;
    return 0;
}