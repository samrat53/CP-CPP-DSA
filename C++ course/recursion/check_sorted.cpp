#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

bool isSorted(vector<int>&vec,int length){
    vector<int> :: iterator it=vec.begin();
    if(length==0 || length==1) return true;
    if(vec[0]<=vec[1]){ 
        vec.erase(it);
        bool ans= isSorted(vec,length-1);
        return ans;
    }
    else return false;
}
int main(){
    int length; cin>>length;
    vector<int> vec;
    for(int i=0;i<length;i++){
        int temp; cin>>temp;
        vec.push_back(temp);
    }
    if(isSorted(vec,length)) cout<<"YES";
    else cout<<"no";
    return 0;
}