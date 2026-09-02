#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter Id of your item" << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void)
{
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id"<<"itemId[100]"<<"is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop dukaan; //DRIVER PROGRAM
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}