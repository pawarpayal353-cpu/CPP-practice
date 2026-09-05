//FRIEND FUNCTION = expl. as we know that its not allowed to access memory from private members 
//so if we want to do so we need to be a friend of compiler ...i.e. we need to have a written 
//permission letter compiler to access private members .... for that we use friend function
//PROPERTIES:
//  -> not in the scope of class
//  -> since, it is not in the scope of the class, it cannot be called from the object of that
//       class.c1.sumComplex()==Tnvalid
//  -> can be invoked without the help of any object
//  -> usually contains the objects and arguments
//  -> can be declared inside public or private sxection of the class
//  -> it cannot access the memory directly by their names and need object_name.member_name
//       to access any number

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1, b = n2;
    }
    //below line means that sumComplex function is allowed to access and do whatever it wants
    // to do with private members...
    friend Complex sumComplex(Complex c1, Complex c2);//(non members)
    void printNumber()
    {
        cout << "Your complex number is" << a << "+" << b << "i" << endl;
    }
};
Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setNumber((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    Complex c1, c2,sum;
    c1.setNumber(5, 9);
    c1.printNumber();

    c2.setNumber(6, 2);
    c2.printNumber();

    sum=sumComplex( c1, c2);
    sum.printNumber();

    return 0;
}