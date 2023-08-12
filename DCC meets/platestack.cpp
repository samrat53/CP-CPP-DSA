#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    stack<int>s;
    while(t>0){
        cin>>x;
        if((s.empty()==true)&&(x==2))
        cout<<"Invalid";
        
        else if(x==1)
        {    
            int temp;
            cin>>temp;
            s.push(temp);
            
        }

        else if(((s.size()>0)&&(x==2)))
        {
            cout<<s.top();
            s.pop();

        }
        
        t--; 
    }
    return 0;

}

//sort(v.begin(),v.end(),greater<int>); for descending order