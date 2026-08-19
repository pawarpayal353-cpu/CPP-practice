/*
#include<iostream>
using namespace std;
int main(){
    cout<<"This is hello world program";


    return 0;
}*/
// Their are two types of header files
/*1' system header files - it comes with the compiler
2.user defined header files - it is written by the programmer


*/

/*
OPERATORS
TYPES
ARITHMETIC = + - * / %  a++ a-- ++a --a
ASSIGNMENT = used to assign values to variables '='
COMPARISON = compares values


*/

/*
#include<iostream>
using namespace std;
int main(){
   int a = 4;
   int b = 6;
   cout<<"The value of a + b is:"<<a+b<<endl;
   cout<<"The value of a - b is:"<<a-b<<endl;
   cout<<"The value of a * b is:"<<a*b<<endl;
   cout<<"The value of a / b is:"<<a/b<<endl;
   cout<<"The value of a % b is:"<<a%b<<endl;
   cout<<"The value of a++ is:"<<a++<<endl;
   cout<<"The value of ++a is:"<<++a<<endl;
   cout<<"The value of a-- is:"<<a--<<endl;
   cout<<"The value of --a is:"<<--a<<endl;


  return 0;
}
*/

/*
ASSIGNMENT OPERATOR = used to assign values to variable
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    cout << "The value of a == b is:" << (a == b) << endl;
    cout << "The value of a !=>b is:" << (a != b) << endl;
    cout << "The value of a > b is:" << (a > b) << endl;
    cout << "The value of a < b is:" << (a < b) << endl;
    cout << "The value of a >= b is:" << (a >= b) << endl;
    cout << "The value of a <= b is:" << (a <= b) << endl;
    cout << endl;
    cout << "The value of a + b is:" << a + b << endl;
    cout << "The value of a - b is:" << a - b << endl;
    cout << "The value of a * b is:" << a * b << endl;
    cout << "The value of a / b is:" << a / b << endl;
    cout << "The value of a % b is:" << a % b << endl;
    cout << "The value of a++ is:" << a++ << endl;
    cout << "The value of ++a is:" << ++a << endl;
    cout << "The value of a-- is:" << a-- << endl;
    cout << "The value of --a is:" << --a << endl;
    cout << endl;
    // logical operators
    cout << "following are the types of logical operators in c++" << endl;
    cout << "the value of logical and operators ((a==b)&&(a<b)) is :" << ((a == b) && (a < b)) << endl;
    cout << "the value of logical or operators ((a==b)||(a<b)) is :" << ((a == b) || (a < b)) << endl;
    cout << "the value of logical not operators (!((a==b)||(a<b)))is :" << (!((a == b) || (a < b))) << endl;
    cout<<endl;
    //BITWISE OPERATORS
    /*- convert number in binary
    perform bit by bit operation*/
  
  
  
    return 0;
}
