#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main(){
    int row, col;
    cin>>row>>col;
    int** arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    } 
    // creatiopn done
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<row;j++)
       {
            cin>>arr[i][j];
       } 
    }// printing done
    cout<<endl;

    for(int i=0;i<row;i++)
    {
       for(int j=0;j<row;j++)
       {
            cout<<arr[i][j]<<" ";
       } 
       cout<<endl;
    }

    // releasing memory

    for(int i=0;i<row;i++) delete []arr[i];

    delete []arr;

    
    return 0;
}