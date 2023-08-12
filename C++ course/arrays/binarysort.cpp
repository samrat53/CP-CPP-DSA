// time complexity: O(n^2)
// space complexity: O(1) or constant

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //sorting starts here: ascending order

    for(int i=1;i<(n);i++){
        for(int j=0;j<n-i;j++) 
        //for every ith iteration, the ith largest element is placed to its correct position
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

        }
    }
    cout<<"Sorted :"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
