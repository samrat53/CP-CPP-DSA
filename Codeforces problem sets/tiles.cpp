#include<bits/stdc++.h>
using namespace std;
int main(){
    double m,n,a;
    double l,b,tiles;
    cin>>m>>n>>a;
    if((m%a)!=0&&(n%a)!=0)
    {
        if((m>a)&&(n>a))
        {
            tiles=(m/a)+(n/a);
            cout<<tiles;
        }
        
        else if((m<a)&&(n>a))
        {
            tiles=ceil(n/a);
            cout<<tiles;
        }

        else if((m<a)&&(n<a))
        {
            tiles=1;
            cout<<tiles;
        }
        else if((m>a)&&(n<a))
        {
            tiles=ceil(m/a);
            cout<<tiles;
        }
    }

    else if((m%a)==0&&(n%a)!=0)
    {
        if(n<a)
        tiles=m/a;
        else
        tiles=(m/a)+ceil(n/a);
        cout<<tiles;
    }

    else if((m%a)!=0&&(n%a)==0)
    {
        if(m<a)
        tiles=n/a;
        else
        tiles=(n/a)+ceil(m/a);
        cout<<tiles;
    }

    else
    {
        tiles=(m*n)/pow(a,2);
        cout<<tiles;
    }

    
    
    return 0;

}