//GLOBAL VARIABLE PRINT, DATATYPE CONVERSION, TYPECASTNG  REFERENCE VARIABLE

#include <iostream>
using namespace std;

int c=45;

int main()
{
//*********************GLOBAL VARIABLE PRINT*****************************    
    /*
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"entyer the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is :"<<c;
    cout<<"the global c is "<<::c;
    */
    //:: operator is used to print the global variable value

//***************FLOAT DOUBLE LONG LITERALS*********************    

    /*
    float a=34.4f; //f or F with a num is used to convert the num to float
    long double b=34.4l;//l or F with a num is used to convert to double
    cout<<"size of 34.4 is :"<<sizeof(34.4)<<endl;
    cout<<"size of 34.4f is :"<<sizeof(34.4f)<<endl;
    cout<<"size of 34.4F is :"<<sizeof(34.4F)<<endl;
    cout<<"size of 34.4l is :"<<sizeof(34.4l)<<endl;
    cout<<"size of 34.4L is :"<<sizeof(34.4L)<<endl;
    */

   //************REFERNCE VARIABLE*****************
    /*
    float x=2222;
    float & y=x; //ampersand & operator is used to create a refernce variable
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    x=x+1;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    */

    //*********************Type casting***********************************
    
    /*int a=45;
    float b=45.46;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<float(b)<<endl;

    cout<<"the value of a is "<<(int)a<<endl;
    cout<<"the value of b is "<<(int)b<<endl;
    int c=(int)b;
    cout<<"the value of a+b  is "<<a+b<<endl;
    cout<<"the value of a+(int)b is "<<a+(int)b<<endl;
    cout<<"the value of a+b(int) is "<<a+int(b)<<endl;
*/

    return 0;



}