#include<iostream>
using namespace std;

int main (){
   // int a, b, c;
                //build in data types       
   /* cout<<"enter the value of a:"<<endl;
    cin>>a;
  cout<<"enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum is "<<c<<endl;
    cout<<"the global c is "<<c;  */

        //Flote, Doublr and long double Literals       

/*float d = 34.4F;
long double e = 34.4F;
cout<<"the value of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"the value of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"the value of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"the value of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"the value of 34.4L is "<<sizeof(34.4L)<<endl;
cout<<"the value of d is "<<d<<endl<<"the sum of e is "<<e; */

/*                      Reference Variables
Rohan Das --->  Montyt--->   Rohu ---->  Dangerous Coder

float x=455;
float & y = x;
cout<<x<<endl;
cout<<y<<endl;   */

//         TYPECASTINMG
int a = 45;
float b = 45.46;
cout<<"the value of a is "<<(float)a<<endl;
cout<<"the value of a is "<<float(a)<<endl;

cout<<"the value of b is "<<(int)b<<endl;
cout<<"the value of b is "<<int(b)<<endl;
int c = int (b);

cout<<"the expression is "<<a + b<<endl;
cout<<"the expression is "<<a + int(b)<<endl;
cout<<"the expression is "<<a + (int)b<<endl; 



    return 0;

}
