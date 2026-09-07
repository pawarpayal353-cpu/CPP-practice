
#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // r can be a value like 0.04
    bankDeposit(int p, int y, int r);   // r can be value like 14
    void show();
};

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void bankDeposit::show()
{
    cout << endl
         << " principal value was  " << principal
         << " , Return value after  " << year
         << " years is " << returnValue << endl;
}

int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p ,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p ,y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();

   bd3.show();
    return 0;
}
