#include <bits/stdc++.h>
using namespace std;
bool ispar(string x){
    int len=x.length()-1;
    if(x[0]==')' || x[0]=='}' || x[0]==']') return false;
    else if(x[len]=='(' || x[len]=='{' || x[len]=='[') return false;

    stack<char>openBraces;

    for(auto it=x.begin();it!=x.end();it++)
    {
        if(openBraces.empty()) openBraces.push(*it);

        else if(*it==']' && openBraces.top()=='[') openBraces.pop();
        else if(*it=='}' && openBraces.top()=='{') openBraces.pop();
        else if(*it==')' && openBraces.top()=='(') openBraces.pop();
        else openBraces.push(*it);
    }
    if(openBraces.size()==0) return true;
    return false;
}
int main()  {
    string s;
    cin>>s;
    if(ispar(s)) cout<<"yes"; else cout<<"no";
    return 0;
}