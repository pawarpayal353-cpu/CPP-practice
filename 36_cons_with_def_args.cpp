#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
        simple(int a,int b=9){
            data1=a;
            data2=b;
        }
        void printData(){
            cout<<"The value of data1 and data2 is"<<data1<<"and "<<data2<<endl;
        }

};
int main(){
    simple s(1,7);
    s.printData();

    simple p(9);
    p.printData();
    return 0;
}

//use 36's concept in 35