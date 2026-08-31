/*INLINE FUNCTION = function which expands in one line 
compiler reppplaces function call with function code,during compile time
gives same output , saves time.... , it becomes a request to compiler(it must have a certain reason/condition).... 
must not be used for big codes , for recurtion,whenever there is use of static variables,
*/

// #include<iostream>
// using namespace std;
//     inline int product(int,int);
//     inline int product(int a,int b){
//         return a*b;
//     }
// int main(){
//      int a,b;
//      cout<<"Enter the values of a and b :"<<endl;
//      cin>>a>>b;
//      cout<<"The product is :"<<product(a,b)<<endl;
//     return 0;
// }

/*



/* default arguments =they are values which we get, if we have not given any value*/


#include<iostream>
using namespace std;

float moneyReceive(float presentMoney , float factor=1.04);
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