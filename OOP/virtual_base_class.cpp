#include <iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007 
using namespace std;

class Student{
    protected:
    int roll;
    public:
    void setRoll(int roll){
        roll=roll;
    }
    void printNum(){
        cout<<"roll from stdeunt= "<<roll<<endl;
    }
};

class Test : virtual public Student{  //virtual import so that result gets only 1 copy of roll
    protected:
    int computer, maths;
    public:
    Test(){}
    void set_marks(int a,int b){
        computer=a;
        maths=b;
    }
    void printMarks(){
        cout<<"maths= "<<maths<<" computer= "<<computer<<endl;
    }
};


class Sports : virtual public Student{
    protected:
    int score;
    public:
    Sports(){}
    void set_score(int b){
        score=b;
    }
    void printMarks(){
        cout<<"score= "<<score<<endl;
    }
};

class Result : public  Test, public Sports{
    public:
    int total;
    void printTotal(){
        total=maths+computer+score;
        cout<<"total= "<<total<<endl;
    }
    void printTestMarks(){
        Test::printMarks();
    }
    void printSportsMarks(){
        Sports::printMarks();
    }
};

int main(){
    Result sam;
    sam.setRoll(21);
    sam.set_marks(90, 85);
    sam.set_score(95);
    sam.printNum();
    sam.printTestMarks();
    sam.printSportsMarks();
    sam.printTotal();
    return 0;
}