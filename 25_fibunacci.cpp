// 1,1,2,3,5,8,13,21,.....

#include <iostream>
using namespace std;

int fib(int);
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << "The term in fibunacci series at position " << n << " is " << fib(n) << endl;
    return 0;
}