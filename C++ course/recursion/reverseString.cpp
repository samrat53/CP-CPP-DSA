#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void reverseString(string &str, int leftInd, int rightInd){
    if(leftInd>rightInd) return;
    swap(str[leftInd],str[rightInd]);
    reverseString(str,++leftInd,--rightInd);
}
int main(){
    string s; cin>>s;
    reverseString(s,0,s.length()-1);
    cout<<"reversed: "<<s;

    return 0;
}