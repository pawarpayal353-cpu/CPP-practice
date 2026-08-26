// FUNCTIONS
//  do / make it once and use it foreverboil
// FUNCTION PROTOTYPE
// type function-name (arguments);
//  it tells that their will be xyz named function type in upcoming program so be ready
//  inshort it tells the existence of any function type before defining the function
#include <iostream>
using namespace std;
 int sum(int ,int );              //ACTUAL PARAMETERS
// void g();
// void g(){
//     cout<<"\nHello, Good Morning\n"<<endl;
// }
int sum(int a, int b)               //FORMAL  PARAMETERS
{
    // int a;
    // int b;
    int c = a + b;
    return c;
}
int main()
{
    int numx;
    int numy;
    cout << "Enter value of x" << endl;
    cin >> numx;
    cout << "Enter value of y" << endl;
    cin >> numy;
    cout << "The sum is " << sum(numx, numy);
   // g();
    return 0;
}
/*
FORMAL PARAMETERS=those parameters which we have made in function
ACTUAL PARAMETERS = they are the values which are passed to functions
num1 and num2 are actual parameters
 formal parameters a and b will be values from actual parameters num1 and num2*/