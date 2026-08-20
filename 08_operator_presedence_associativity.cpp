// end.cppreference.com
//+- = left to right associativity

#include <iostream>

using namespace std;
int main()
{
    int a = 89, b = 87;
    int c = ((((a * 5) + b) - 45) + 87); // left to right
    cout << c;
    return 0;
}
//defn of both=
/*
presedence=Determine the order in which differernt operators in an expression are evaluated
associativity=Refers to the direction an expression is evaluated in program 
*/