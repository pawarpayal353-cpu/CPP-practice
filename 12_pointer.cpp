// POINTERS= data type which stores the address of another datatype
#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int *b = &a;
    int**c =&b;
    // '&' = (address of) operator
    // '*' = (value at) dereferencing operator
    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;
    cout << "The address of a is :" << &a << endl;
    cout << "The address of b is :" << &b << endl;
    cout << "The value at address b is :" << *b << endl;
    cout << "The value at address cis :" << *c<< endl;
    cout << "The value at address cis :" << **c<< endl;
    return 0;
}