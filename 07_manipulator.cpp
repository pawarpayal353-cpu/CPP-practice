#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ //MANIPULATORS IN C++
    int a = 5, b = 67, c = 1234;
    cout<<"The value of a without setw(4) is : "<<a<<endl;
    cout<<"The value of b without setw(4) is : "<<b<<endl;
    cout<<"The value of c without setw(4) is : "<<c<<endl;

cout<<endl;

    cout<<"The value of a is : "<<setw(4)<<a<<endl;
    cout<<"The value of b is : "<<setw(4)<<b<<endl;
    cout<<"The value of c is : "<<setw(4)<<c<<endl;
    return 0;
}