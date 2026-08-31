/* default arguments =they are values which we get, if we have not given any value*/


#include<iostream>
using namespace std;

float moneyReceive(float presentMoney , float factor=1.04);// SOMETIMES THIS WILL GIVE ERROR
//                 (compulsary arguments,default arguments)
//deafult arg. must be written after ...otherwise it will give error
float moneyReceive(float presentMoney , float factor=1.04){
    return presentMoney*factor;
}
int main(){
    float money=10000.0;
    cout<<"if you have "<<money<<"Rs in your bank , you will receive "<<moneyReceive(money)<<"after 1 year"<<endl;


    return 0;
}


/* constant arguments= which cant be changed 
 valid mostly for reference variables and pointers,
*/