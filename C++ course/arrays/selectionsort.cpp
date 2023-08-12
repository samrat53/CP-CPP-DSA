#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n) //selects a array element and puts it in its correct position
{
   //to sorting in ascending order 
   for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
    
    cout<<"Sorted: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    //return ;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    selectionsort(arr,n);
    return 0;
}
