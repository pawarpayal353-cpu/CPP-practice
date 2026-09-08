#include<iostream>
using namespace std;
class number{
int a=0;
public:
    number(){
       // a=0; // also allowed
    }//this is a default constructor
    number(int num){
        a=num;
    }
    number(number &obj){
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }
    void printData(){
        cout<<"the number for this object is"<<a<<endl;
    }
};
int main (){
    number x,y,z(99);
    x.printData();
    y.printData();
    z.printData();
    number z1(x);
    z1.printData();

    return 0;
}
    //COPY CONSTRUCTORS = thid constructor makes a copy of another object