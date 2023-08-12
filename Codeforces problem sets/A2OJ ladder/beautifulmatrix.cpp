#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5], row=-1,clm=-1,count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                row=i;
                clm=j;
                break;
            }
        }
    }

    if(clm==0)
    {
        count=count+2;
    }

    if(clm==1)
    {
        count=count+1;
    }

    if(clm==3)
    {
        count=count+1;
    }

    if(clm==4)
    {
        count=count+2;
    }

     if(row==0)
    {
        count=count+2;
    }

    if(row==1)
    {
        count=count+1;
    }

    if(row==3)
    {
        count=count+1;
    }

    if(row==4)
    {
        count=count+2;
    }

    cout<<count;
    return 0; 
}
