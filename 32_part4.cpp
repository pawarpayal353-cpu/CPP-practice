#include <iostream>
using namespace std;
class c1;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void setData(int a)
    {
        val1 = a;
    }
    void getData(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void setData(int b)
    {
        val2 = b;
    }
    void getData(void)
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.setData(99);
    o2.setData(81);
    exchange(o1, o2);

    cout << "The value after exchange becomes:  " << endl;
    o1.getData();
    cout << "The value after exchange becomes: " << endl;
    o2.getData();

    return 0;
}