// #include<iostream>
// using namespace std;
//  void swap(int* ,int*);
// void swap(int*x ,int*y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// };
// int main(){
//     int a=4;
//     int b=5;
//     cout<<"the value of a is"<<a<<"and the value of b is "<<b<<endl;
//     swap(&a,&b);
//     cout<<"the value of a is"<<a<<"and the value of b is "<<b<<endl;
//     return 0;
// }

// // call by reference using c++ reference variables

#include<iostream>
using namespace std;
 void swap(int& ,int&);
void swap(int&x ,int&y){
    int temp;
    temp=x;
    x=y;
    y=temp;
};
int main(){
    int a=4;
    int b=5;
    cout<<"the value of a is"<<a<<"and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"the value of a is"<<a<<"and the value of b is "<<b<<endl;
    return 0;
}
