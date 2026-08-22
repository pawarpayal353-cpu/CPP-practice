// ARRAY = collection of items of similar types stored in contiguous memory locations
#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {44, 55, 66, 77};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 33;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks is " << i << "is" << marks[i] << endl;
    }

    return 0;
}
