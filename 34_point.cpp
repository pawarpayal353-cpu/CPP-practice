#include<iostream>
using namespace std;
class point{
int x,y;
public:
point(int a , int b){
x=a;
y=b;
}
void displayPoint(){
    cout<<"The point is("<<x<<","<<y<<")"<<endl;
}

   

};
int main(){
    point p(5,8);
    p.displayPoint();

    point q(9,8);
    q.displayPoint();

    return 0;
}
//create a function which takes 2point objects and computes the  distance them
//((x2-x1)^2 + (y2-y1)^2)
//friend function
//use c++ mathssqrt