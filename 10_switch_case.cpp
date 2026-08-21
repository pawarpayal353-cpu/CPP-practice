#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
        case 22:
        cout << "You are 22" << endl;
        break;
        case 3:
        cout << "You are 3" << endl;
        break;
        case 78:
        cout << "You are 78" << endl;
        break;

    default:
        cout<<"Nothing Matched"<<endl;
        break;
    }
    cout<<"done with switch case"<<endl;

    return 0;
}