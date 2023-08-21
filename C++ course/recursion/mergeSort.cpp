// time: O(NlogN) reason:
// merge function: O(N)
// mergeSort function: O(logN) cuz it divides every part into 2

// merge sort has the best time complexity amoing all sorting algos 

#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
void merge(int *arr, int low, int mid, int high){
    // make a temp array, push from both left and right parts into the temp array
    // then copy the same vakues to the original array
    vector<int>temp;
    int  left=low , right =mid+1;

    //merge sorted array
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //copy values from temp to the original array
    for(int i=low, tempIndex=0; i<=high, tempIndex<temp.size() ;i++, tempIndex++)
    arr[i]=temp[tempIndex];
    // arr[i]=temp[i-low]; we can also do this in place of this line
    
}

void mergeSort(int *arr, int low, int high){
    if (low==high) return;
    int mid =(low+high)/2;
    mergeSort(arr,low,mid); //leftside
    mergeSort(arr,mid+1, high); //right side
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Merge sorted array"<<endl;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}