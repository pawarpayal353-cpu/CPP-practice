#include <iostream>
int main()
{
    int a;
    int b;
    std::cout << "Enter the value of a: \n";
    std::cin >> a;
    std::cout << "Enter the value of b: \n";
    std::cin >> b;
    std::cout<<"The sum is :"<<a+b;
    return 0;
}
//.\a.exe
/*
PS C:\Users\Admin\OneDrive\ultimate C++ course\DAY 1> g++ .\04_input.cpp
PS C:\Users\Admin\OneDrive\ultimate C++ course\DAY 1> .\a.exe
Enter the value of a: 
7
Enter the value of b: 
8
The sum is :15*/