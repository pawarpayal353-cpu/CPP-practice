//TRY ONCE AGAIN
#include<iostream>
using namespace std;
class Complex;
class Calci{
    public:
        int add(int a,int b){
            return (a+b);
        }

        int sumRealComplex(Complex c1,Complex c2);
        int sumCompComplex(Complex c1,Complex c2);
};
class Complex{
    int a,b;
    friend int Calci ::sumRealComplex(Complex,Complex);
    public:
        void setNumber(int n1,int n2){
            a=n1,b=n2;
        }
        void printNumber(){
            cout<<"your complex number is"<<a<<"+"<<b<<"i"<<endl;
        }

};

// individually declaring function as friends
// friend int Calci ::  


int main(){

Complex c1,c2;
c1.setNumber(9,5);
c2.setNumber(4,7);
Calci calc;
int res = calc.sumRealComplex(c1,c2);
cout<<"The sum of real part "<<res<<endl;
int resc = calc.sumCompComplex(c1,c2);
cout<<"The sum of complex part  "<<res<<endl;
 return 0;
}