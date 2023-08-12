//not accepted
//not accepted
//not accepted
//not accepted
//not accepted
//not accepted
//not accepted
//not accepted
//not accepted
//not accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    int x3,y3,x4,y4;
    
    if((x1!=x2)&&(y1!=y2))
    {
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
        int d1=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        int d2=sqrt(pow(x2-x4,2)+pow(y2-y4,2));
        if (d1==d2)
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
        else 
        cout<<-1;
    }
    else if(x1==x2)
    {
        int d=y1-y2;
        int x3=x1+d;
        y3=y2;
        x4=x3;
        y4=y1;
        int d1=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        int d2=sqrt(pow(x2-x4,2)+pow(y2-y4,2));
        if (d1==d2)
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
        else 
        cout<<-1;
    }
    else if(y1==y2)
    {
        int d=x1-x2;
        int y3=y1+d;
        x3=x1;
        x4=x2;
        y4=y2;
        int d1=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        int d2=sqrt(pow(x2-x4,2)+pow(y2-y4,2));
        if (d1==d2)
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
        else 
        cout<<-1;
    }
    

    
    return 0;
}