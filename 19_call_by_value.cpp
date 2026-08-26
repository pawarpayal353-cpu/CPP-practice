#include<iostream>
using namespace std;
void swap(int ,int);
void swap(int a ,int b){

    int temp;
    temp=a;
    a=b;
    b=temp;

}

int main(){
    int x=999;
    int y=777;
    cout<<"The value of a is"<<x<<" the value of b is"<<y<<endl;
    swap(x,y);
    cout<<"the value of a is"<<x<<"the value of b is"<<y<<endl;
      
    return 0;
}