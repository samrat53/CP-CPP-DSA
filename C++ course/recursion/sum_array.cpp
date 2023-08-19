#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int sumArray(int *arr,int length){
    if(length==1) return arr[0];
    int ans=arr[0]+sumArray(arr+1, length-1);
    return ans;
}

int main(){
    int length; cin>>length;
    int arr[length];
    for(int i=0;i<length;i++)cin>>arr[i];
    cout<<sumArray(arr,length)<<endl;

    return 0;
}