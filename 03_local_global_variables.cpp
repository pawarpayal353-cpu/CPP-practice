#include <iostream>


int glo = 55;                   //global variables
void sum(){
    int a;
    std::cout<<glo;
}

int main()
{//just for fun....
                                    //local variables
    int glo = 5;
   glo = 78; //updated value 

   int a = 5;
     bool is_true = true;                               // presedence = local>global
    sum();
    std::cout<<glo<<is_true;
    return 0;
}