// UNIONS =Similar like structure but they provide better memory management, it shares memory and hence memory is conserved
//ENUM = it will give  numbers like 1 , 2 or 3 
#include <iostream>
using namespace std;
typedef struct employee
{
    int eID;
    int contact_no;
    float salary;
} ep ;
union money
{

    int rice;
    char car;
    float pounds;
};
int main()
{
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;  // enum will give us an  number to represent an name like dunner or anyhting else ... 
    cout<<dinner;           //  in union saves memory
                        // its easy for understanding like o means breakfast,1 means lunch etc...
    // union money m1;
    // m1.rice = 45;
    // m1.car ='c';    // in union if we have given one value then we will see only one value perfectly ...
    // ep payal;
    // cout<<m1.rice;  // can use only one value
    // ep gauri;
    // payal.eID = 1;
    // payal.contact_no = 1234567899;
    // payal.salary = 120000;

    // cout << endl;
    // gauri.eID = 1;
    // gauri.contact_no = 1234567899;
    // gauri.salary = 120000;
    // cout << "The value is " << payal.eID << endl;
    // cout << "The value is " << payal.contact_no << endl;
    // cout << "The value is " << payal.salary << endl;
    // cout << endl;

    // cout << "The value is " << gauri.eID << endl;
    // cout << "The value is " << gauri.contact_no << endl;
    // cout << "The value is " << gauri.salary << endl;
    return 0;
}
