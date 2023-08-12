/*
1. find mid element
2. comapre the mid key
3. == then return  the index
   != then check the part where to search next 
*/

#include<bits/stdc++.h>
using namespace std;
//this is for ascending order sorted array only
//if descending order sorted then slight changes will be there 
int binarySearch(int arr[],int size,int key){
    int startindex=0;
    int endindex=size-1;
    int midindex=(startindex+(endindex-startindex)/2);
    // we didnt use s+e/2 which is also correct but can give anomaly for long indexes
    
    while(startindex<=endindex){
        if(arr[midindex]==key)
        {
            return midindex;
        }
        else if(arr[midindex]!=key){

            if(key>arr[midindex])//then check right side if ascending
            {
                startindex=midindex+1;//right shift
                //end index remains same since we checking that side only
                midindex=(startindex+(endindex-startindex)/2);
            }
            else if(key<arr[midindex])// then check left side if ascending
            {
                endindex=midindex-1;//left shift
                // startixdex remains same since we are checking that portion only
                midindex=(startindex+(endindex-startindex)/2);
            }
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"enter array length"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter sorted array in ascending order "<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"enter key "<<endl;
    cin>>key;
    int index=binarySearch(ar,n,key);
    if(index>=0)
    cout<<"Key found at index: "<<index<<endl;
    else
    cout<<"Key not found cuz the index at last is :"<<index<<endl;
    return 0; 
}