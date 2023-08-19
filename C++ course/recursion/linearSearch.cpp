#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

bool linearSearch(int *arr, int key, int length){
    if(length==0)  return false;
    if(arr[0]==key) return true;
    else linearSearch(arr+1,key,length-1);
}

int main(){
    int n; cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n;i++) cin>>arr[i];
    int key; cout<<"key :"; cin>>key;
    if(linearSearch(arr,key,n)) cout<<"present sir";
    else cout<<"absent sir";

    return 0;
}