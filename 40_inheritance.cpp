//{{}}= used when we want to show that we have to perform replace operatiion

//Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc....
// }
/**VISIBILITY MODE 
 * we cant inherit our private members at any cost of base class will never become member of any derived class
 * default visibility mode is private
 * it can either be public or private
 * The way how we inherit our class....
 * if we inherit it publicly
 *  -> then the public members of your base class will become the public members of your derived class
 * if we inherit it privately
 *  -> then your base clsas public members will become the private members of your derived class 
 *    and private mnembers of base class will never be inherited
*/

#include<iostream>     
using namespace std;

//Base Class
class employee{
    public:
    int id;
     float salary;
     employee(int inpid){
       int id=inpid;
        salary=34.0;
     }
     employee(){}// default constructor 
};

//Default Class
class programmer :public employee{
    public:
    int langcode;
    programmer(int inpid){
         id=inpid;
          langcode=9;
     }
        void getData(){
            cout<<id<<endl;
        }
};


int main(){
    employee gauri(2),payal(3);
    cout<<gauri.salary<<endl;
    cout<<payal.salary<<endl;
    programmer skillf(1000);
    cout<<skillf.langcode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();
    return 0;
}