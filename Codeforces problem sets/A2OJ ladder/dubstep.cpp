#include<bits/stdc++.h>
using namespace std;
int main(){
    string remix;
    cin>>remix;
    for(int i=0;i<remix.length();i++)
    {
        if((remix[i]=='W')&&(remix[i+1]=='U')&&(remix[i+2]=='B')) 
        remix.replace(i,3," ");
    }
    while((remix[0]==' ') || (remix[remix.length()-1]==' '))
    {
        if(remix[0]==' ') remix.erase(0,1);
        if(remix[remix.length()-1]==' ') remix.erase((remix.length()-1),1);
    }

    cout<<remix;
    return 0;
}