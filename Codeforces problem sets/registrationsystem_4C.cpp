//NA NA NA NA NA NA NA NA NA NA NA NA NA NA
//NA NA NA NA NA NA NA NA NA NA NA NA NA NA
//NA NA NA NA NA NA NA NA NA NA NA NA NA NA
//NA NA NA NA NA NA NA NA NA NA NA NA NA NA
//NA NA NA NA NA NA NA NA NA NA NA NA NA NA
//NA NA NA NA NA NA NA NA NA NA NA NA NA NA not desired output
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    map<string,int> dataf;
    while(n--)
    {
        string st;
        cin>>st;
        map<string,int> data;
        int c=0;
        for(auto it:data) 
        {
            if(it.first==st) 
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"OK"<<endl;
            data.insert({st,0});
        }
        else if (c==1)
        {
            for(auto it:data)
            {
                if(it.first==st)
                {
                    it.second++;
                    int n=count(it.second);
                    string temp(n,it.second);
                    string first=it.first;
                    first.append(temp);
                    data.insert({first,0});
                    cout<<first<<it.second<<endl;
                    break;
                }
            }
        }dataf=data;
    }

    for(auto it:dataf)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}