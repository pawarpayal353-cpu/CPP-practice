/* FUNCTION OVERLOADING = same name different jobs 
compiler checks whether prototype and arguments are correct and do they match each other

*/
#include<iostream>
using namespace std;
    int sum(int,int);
    int sum(int a, int b){
        cout<<"Using function with two arguments"<<endl;
        return a+b;

    }
    int sum(int , int,int);
    int sum(int a , int b , int c){
        cout<<"Using function with three arguments"<<endl;
        return a+b+c;
    }
    // vol(rectangle)
    int volume(int , int,int);
    int volume(int l,int b,int h){
        return (l*b*h);
    }
    // vol(cylinder)
    int volume(int ,int);
    int volume(int r,int h){
        return (3.14 * r*r*h);

    }
    //vol(cuboid)
    int volume(int );
    int volume(int a){
        return (a*a*a);
    }


int main(){
    cout<<"The sum of 3 and 6 is : "<<sum(3,6)<<endl;
    cout<<"The sum of 3 , 5 and 6 is :  "<<sum(3,5,6)<<endl;
    cout<<"The volume of rectangle of  length 3,breadth 6,height 8 is : " <<volume(3,6,8)<<endl;
    cout<<"The volume of cylinder of radius 5 and height 7 is : "<<volume(5,7)<<endl;
    cout<<"The volume of cuboid of  side 3 is :"<<volume(3)<<endl;
    return 0;
}



