#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

bool checkPalindrome(string &str, int leftInd, int rightInd){
    if(leftInd>rightInd) return true;
    if (str[leftInd]==str[rightInd]){
        checkPalindrome(str, ++leftInd, --rightInd);
    }
    else return false;
}
int main(){
    string s; cin>>s;
    if(checkPalindrome(s,0,s.length()-1))cout<<"palindrome";
    else cout<<"not palindrome";

    return 0;
}