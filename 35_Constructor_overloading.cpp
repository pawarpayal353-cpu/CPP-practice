//CONSTRUCTOR OVERLOADING= we can have multiple constructors in a single class ...
//constructor which matches with the arguments will run is called as..
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(){ //default constructor
            a=0;
            b=0;
        }
        complex(int x,int y){ //parametrised constructor
            a=x;
            b=y;
        }
        complex(int x){
            a=x;
            b=0;
        }
        void printNumber(){
            cout<<"Your complex number is"<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    complex c1;
    c1.printNumber();

    complex c2(9,7);
    c2.printNumber();

    complex c3(88);
    c3.printNumber();

    return 0;
}