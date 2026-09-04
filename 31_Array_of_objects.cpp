#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=111;
            cout<<"Enter the id";
            cin>>id;
        }

        void getId(void){
            cout<<"The id of employee is"<<id<<endl;
        }

    
};


int main(){
    //Employee gauri,payal,shreyaa,aryaa;

    // gauri.setdata();
    // gauri.getdata();

    // payal.setdata();
    // payal.getdata();

    // shreyaa.setdata();
    // shreyaa.getdata();

    //aryaa.setId();
    //aryaa.getId();

    Employee bts[4];
    for(int i=0;i<4;i++){
        bts[i].setId();
        bts[i].getId();

    }

    return 0;
}