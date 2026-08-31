// static variables = static means the value of a varible will be initialized only once, after that it will retain the value of variable...
// then after coming back to the function it will consider the retain (new) vlaue of variable for further work ......
// not in loops , must not use inline and static together, not in switch statements*/

#include<iostream>
using namespace std;
     int product(int,int);
     int product(int a,int b){
        static int c=0; //this executes only once
        c=c+1;// next time this function is run, the value of c is retained
        return a*b+c;
    }
int main(){
     int a,b;
     cout<<"Enter the values of a and b :"<<endl;
     cin>>a>>b;
     cout<<"The product is :"<<product(a,b)<<endl;
     cout<<"The product is :"<<product(a,b)<<endl;
     cout<<"The product is :"<<product(a,b)<<endl;
     cout<<"The product is :"<<product(a,b)<<endl;
     cout<<"The product is :"<<product(a,b)<<endl;
    return 0;
}