#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
bool binarySearch(int *arr,int start, int end, int key){
    if(start>end) return false;
    int mid=(start+end)/2;
    if (arr[mid]==key) return true;
    else if(key>arr[mid]) binarySearch(arr,mid+1,end,key);
    else if(key<arr[mid]) binarySearch(arr, start, mid-1,key);
}
int main(){
    int length; cin>>length;
    int *arr=new int[length];
    for (int i = 0; i < length; i++) cin>> arr[i];
    int key; cout<<"key: "; cin>>key;
    int start=0, end=length-1;
    if(binarySearch(arr,start, end ,key))  cout<<"present sir";
    else cout<<"absent sir";
    

    delete []arr;
    return 0;
}