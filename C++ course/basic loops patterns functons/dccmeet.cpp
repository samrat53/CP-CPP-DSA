#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,x;
    int ar[10];
    set<int>st;
    for(i=0;i<10;i++){

        cin>>x;
        ar[i]=x;
    }

    cout<<"the output is"<<endl;
for(i=0;i<10;i++)
{
    cout<<ar[i]<<" ";
}

cout<<endl;
for(i=0;i<10;i++)
{
    cout<<ar[i]<<" ";
}
sort(ar , ar+10,greater<int>()); //for descending order


cout<<endl;
for(i=0;i<10;i++)
{
    cout<<ar[i]<<" ";
}
sort(ar , ar+10); //for ascending order
cout<<endl;

for (i=0;i<10;i++)
{ 
    st.insert(ar[i]);
}
for(auto x:st) //auto instead of for for faster compilation
{
    cout<<x<< " ";
}
cout<<endl;
int pp;
cin>>pp;
st.erase(pp); //to erase a element from the set

    
    for(auto x:st)
{
    cout<<x<<" ";
}
    
    return 0;
}