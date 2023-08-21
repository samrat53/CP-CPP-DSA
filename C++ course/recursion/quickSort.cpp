// time: O(NlogN) cuz we are looping through to find the correct place for pivot O(n)
// and we are diving the array in parts for which O(lohN)
// space: O(1) cuz not extra array is made

//divide and conquere algorithm
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int findPivot(int *arr, int low, int high){
    int pivot = arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1) i++; //chota-> left of pivot
        //to skip all the elements which are smaller than the pivot in the left
        // i.e get to the first element from the left which is greater than the pivot-> send to right cuz greater elements belong to the right
        
        while(arr[j]>pivot && j>=low+1) j--; //bara-> right of pivot
        //to skip through all the elements which are greater than the pivot from the left
        //i.e get to the first element from the right which is smaller than the pivot-> send to left cuz smaller elements belong to the left

        if(i<j) swap(arr[i],arr[j]); 
    }
    swap(arr[low], arr[j]); // i.e when the j>i -> pivot get swapped with j
    return j; // cuz j ki jagah pe low(pivot) aake baith gya
}

void quickSort(int *arr, int low, int high){
    if (low<high) //that measn the array has more than 1 element
    {
        int pivotIndex=findPivot(arr, low, high);
        //this places the pivot at the correct position and returns where the pivot is placed
        
        quickSort(arr, low, pivotIndex-1); //left part
        quickSort(arr,pivotIndex+1, high); // right parte
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++) cin>>arr[i];    
    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++) cout<<arr[i];    
    delete []arr;
    return 0;
}