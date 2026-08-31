/* Recurtion = function calls itself recursively , until the condition is true */
#include <iostream>
using namespace std;
int factorial(int n);
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {

        return n * factorial(n - 1);
    }

    /*
        factorial(4) = 4 * factorial(3);
        factorial(4) = 4 * 3 * factorial(2);
        factorial(4) = 4 * 3 * 2 * factorial(1);
        factorial(4) = 4 * 3 * 2 * 1;
        factorial(4) = 24;
n! = n * (n-1)! ;
    */
}

int main()
{

    int n;
    cout << "Enter value of n :" << endl;
    cin >> n;
    cout << "The factorial of" << n << " is " << factorial(n) << endl;
    return 0;
}
