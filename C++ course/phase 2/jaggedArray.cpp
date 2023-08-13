//making the below pattern using dynamic allocation in array
// `
// ``
// ```
// ````
// `````
// ``````
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main(){
    int n; cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            arr[i]=new int[j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cin>>arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}