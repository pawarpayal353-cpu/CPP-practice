/*

1. sequence structures---|
2. selection structures   |---- baisc control structures
3. looping structures ---|


1. enters first then executes in given order 1->2->3  -> exits
2. enters first -> asks a condition like question -> has results as true or false -> both results have their respective output->exits at last
3. enters first ->loop is their -> condition is checked -> if ans is TRUE it performs a action and again loops -> if FALSE -> takes action and  exits the loop 

*/
//selection structure
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if (age <18)
    {
        cout<<"You cannot come to my party"<<endl;
    }else if (age==18)
    {
        cout<<"You are a kid, you need a kid pass for coming to  my party"<<endl;
    }else{

        cout<<"You can come to my party"<<endl;
    }
    
    

    return 0;
}