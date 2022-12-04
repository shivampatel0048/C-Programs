//there are two types of header files:
// 1.   System header file : It comes with the compiler

#include<iostream>

// 2. user defined header files : It is written ny the programer
// #include  "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){   
    int a=4 , b=5;
cout<<"Oprator in c++:"<<endl;
cout<<"Following are the types of Oprators in c++"<<endl;
//Arithmetic oprators
cout<<"the value of a + b is "<<a+b<<endl;
cout<<"the value of a - b is "<<a-b<<endl;
cout<<"the value of a * b is "<<a*b<<endl;
cout<<"the value of a / b is "<<a/b<<endl;
cout<<"the value of a % b is "<<a%b<<endl;
cout<<"the value of ++a is "<<++a<<endl;
cout<<"the value of --a is "<<--a<<endl;
cout<<"the value of a ++ is "<<a++<<endl;
cout<<"the value of a -- is "<<a--<<endl;
cout<<endl;

// Assignment Operators
// int a=3, b=9
// char d 'd';

// Comparison Operators
cout<<"following are the types of Comparison Oprators in c++"<<endl;
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<endl;

// Logical Operatoors
cout<<"following are the logical operators in c++"<<endl;

cout<<"the value of this logical and operator  ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or operator  ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
cout<<"the value of this logical not operator  (!(a==b)) is:"<<(!(a==b))<<endl;

return 0;

}
