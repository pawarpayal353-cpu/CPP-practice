
//static data members = It takes copy/memory for once and then gets updated by himself....


#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setdata(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
        }
        void getdata(void){
            cout<<"The id of this employee is"<<id<<endl;
        }
};
int Employee::count;
//static , default value is zero , one count variable is shared by G,P,S
//count is the static data member of class employee
int main(){
    Employee gauri,payal,shreyaa;

    gauri.setdata();
    gauri.getdata();

    payal.setdata();
    payal.getdata();

    shreyaa.setdata();
    shreyaa.getdata();

    return 0;
}