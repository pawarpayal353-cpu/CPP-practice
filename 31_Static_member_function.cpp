//Static function = function which will access only static members or variables.... no need of any object
#include<iostream>
using namespace std;
class Employee;
{
    int id;
     int count;
    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of this employee is"<<id;
        }
        static void getCount(void){
            cout<<"The value of count is"<<count<<endl;
        }
};

int main(){
    int Employee::Count;
    Employee gauri,payal,shreyaa;

    gauri.setdata();
    gauri.getdata();
    Employee::getCount();

    payal.setdata();
    payal.getdata();
    Employee::getCount();

    shreyaa.setdata();
    shreyaa.getdata();
    Employee::getCount();

    return 0;
}