#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st[n],part;
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
    }

    int left,right;
    cin>>left>>right;
    for(int i;i<n;i++)
    {
        part=st[i].substr(left-1,right-2);
        char a,b;
        for(int i=0;i<part.length();i++)
        {
            for(int j=i+1;j<part.length();j++)
            {

            }
        }
    }
    
    return 0;
}