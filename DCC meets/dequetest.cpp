#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,temp;
    cin>>t;
    deque<int>d;
    while(t--){
        cin>>x;
        if(x==1)
        {
            cin>>temp;
            d.push_front(temp);
        }
        else if(x==2){
            cin>>temp;
            d.push_back(temp);
        }

        else if(((x==3)||(x==4))&&(d.empty()))
        cout<<"invaid";

        else if(x==3){
            cout<<d.front();
            d.pop_front();
        }

        else if(x==4){
            cout<<d.back();
            d.pop_back();
        }
        
         
    }
    return 0;
}