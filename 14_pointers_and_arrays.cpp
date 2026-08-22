// POINTER ARITHMETICS = address(new) = address(Currenrt) + i*size of(data types)
//                       (P+i)               (P)
#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {22, 33, 44, 55};
    int *p = marks;// shows address of first variable
    cout << "The value of marks[0] is " << *p;
    cout << "\nThe value of marks[1] is " << *(p + 1);
    cout << "\nThe value of marks[2] is " << *(p + 2);
    cout << "\nThe value of marks[3] is " << *(p + 3);
cout<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(--p)<<endl;
    cout<<*(p--)<<endl;
    cout<<*p;

    return 0;
}
