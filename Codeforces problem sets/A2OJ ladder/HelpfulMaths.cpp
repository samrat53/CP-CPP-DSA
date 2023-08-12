#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int l=st.length();
    for(int i=0;i<l-2;i=i+2)
    {
        int minind=i;
        for(int j=i+2;j<l;j=j+2)
        {
            if(st[j]<st[minind])
            minind=j;
        }
        swap(st[i],st[minind]);
    }

    cout<<st<<endl;
    
    return 0;
}