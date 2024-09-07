#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
using namespace std;

class BankDeposit{
   int principal;
   int years;
   float interestRate;
   float returnValue;
   
   public:
   BankDeposit(){}; // this object is created cuz if we create a object like deposit3 whose defination of constructor is not defined
   BankDeposit(int,int,float);
   BankDeposit(int,int,int);
   void show();
};

BankDeposit :: BankDeposit(int p,int y, float r){
   this->principal=p;
   this->years=y;
   this->interestRate=r;
   this->returnValue=principal;
   for(int i=0;i<y;i++){
      returnValue=returnValue*(1+interestRate);
   }
}

BankDeposit :: BankDeposit(int p,int y, int r){
   this->principal=p;
   this->years=y;
   this->interestRate=float(r)/100;
   this->returnValue=principal;
   for(int i=0;i<y;i++){
      returnValue=returnValue*(1+interestRate);
   }
}
void BankDeposit :: show(){
   cout<<"return val= "<<returnValue<<" rate= "<<interestRate<<endl;
}



int main(){
   BankDeposit deposit1, deposit2, deposit3;
   int p,y;
   float rate;
   int RATE;
   cin>>p>>y>>rate;
   deposit1=BankDeposit(p,y,rate);
   cout<<"rate in percentage\n";
   cin>>RATE;
   deposit2=BankDeposit(p,y,RATE);
   deposit1.show();
   deposit2.show();
   return 0;
}