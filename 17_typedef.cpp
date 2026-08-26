//  by using typedef keyword
#include <iostream>
using namespace std;
typedef struct employee
{
    int eID;
    int contact_no;
    float salary;
} ep;
int main()
{

    ep payal;
    ep gauri;
    payal.eID = 1;
    payal.contact_no = 1234567899;
    payal.salary = 120000;

    cout << endl;
    gauri.eID = 1;
    gauri.contact_no = 1234567899;
    gauri.salary = 120000;
    cout << "The value is " << payal.eID << endl;
    cout << "The value is " << payal.contact_no << endl;
    cout << "The value is " << payal.salary << endl;
    cout << endl;

    cout << "The value is " << gauri.eID << endl;
    cout << "The value is " << gauri.contact_no << endl;
    cout << "The value is " << gauri.salary << endl;
    return 0;
}