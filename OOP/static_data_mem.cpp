#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
using namespace std;
class Employee{
   int id;
   public:
   static int count; //static data member
   static void getCount(){ //static member function ->access all the static members
      cout<<"the count till now is "<<count<<endl;
   }
   void setId(){
      cout<<"enter id\n";
      cin>>id;
      count++;
   }
};
int Employee:: count; //static data member
// int Employee:: count=109; initialised count to 109 

int main(){  
   Employee samrat1;
   Employee samrat2;
   int n; cin>>n;
   while(n--){
      samrat1.setId();
   }
   Employee:: getCount();
   cout<<"enter 2nd \n";
   cin>>n;
   while(n--){
      samrat2.setId();
   }   
   Employee:: getCount();
   cout<<"Counts -------------------------------\n";
   cout<<samrat1.count<<endl;
   cout<<samrat2.count<<endl;
   // same count is shared in between samrat1 and samrat2
   
   return 0;
}