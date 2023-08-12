#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> f;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        f[temp]++;
        if(f[temp]>1)
        cout<<"yes";
        else if(f[temp]==1)
        cout<<"no";

    }

//     for(auto &it:f){
//         if(f[it.second]>1)
//         cout<<"yes";
//         else if(f[it.second]==1)
//         cout<<"no";
//     }
//     for(auto &it:f)
//     {
//         if (f[it.first]>1)
//         {
//             //code
//         }
    
    return 0;
}