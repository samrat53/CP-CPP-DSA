//find the diff between the product and sum of digit of a number

#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int sum=0, product=1, digit,num;
    cin>>num;
    while(num!=0){
        digit=(num)%(10);
        product=product*digit;
        sum=sum+digit;
        num=num/(10);
    }
cout<<product-sum;
return 0;
}

 