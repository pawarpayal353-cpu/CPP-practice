// PARAMETERISED CONSTRUCTORS= It takes values...by implicit call
#include <iostream>
using namespace std;
class complex
{
    int a, b,d;

public:
    complex(int , int);
    void printData()
    {
        cout << "The complex number is " << a << "+" << b << "!" << endl;
    }
};
complex :: complex(int x,int y){// it is a parameterised constructor as it takes 2 parameters....
    a=x;
    b=y;
}
int main()
{
    // implicit call
    complex c(7,6);

    //explicit call
    complex a= complex(7,9);
    complex b = complex(6,7);
    a.printData();
    b.printData();
    return 0;
}