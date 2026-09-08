//DESTRUCTORS = it frees up the memory which was taken by constructors
/**
 * never takes an argument
 * does not return any value
 * compiler automatically calls destructor to clean up the storage when program ends
 */
#include<iostream>
using namespace std;
    int count=0; //CORRECT

class num{
   // int count=0; //WRONG 
public:
    num(){
        count++;
        cout<<"constructor is called at this time"<<count<<endl;
    }
    ~num(){
        cout<<"distructor is called at this time"<<count<<endl;
        count--;   
    }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}