#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int findPivot(int *arr, int low, int high){
    int pivot = arr[0];
    int i=low, j=high;
    while(i<j){
        while(arr[i])
    }
}

void quickSort(int *arr, int low, int high){
    if (low<high) //that measn the array has more than 1 element
    {
        int pivotIndex=findPivot(arr, low, high); //this places the pivot at the correct position and returns where the pivot is placed
        quickSort(arr, low, pivotIndex-1); //left part
        quickSort(arr,pivotIndex+1, high); // right parte
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    quickSort(arr, 0, n-1);
    delete []arr;
    return 0;
}