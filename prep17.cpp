#include <iostream>
using namespace std;

class c2;
class c1
{
    int val1;
    friend void exchange(c1 &,c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }

    void Display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;

public:
    void inData(int a)
    {
        val2 = a;
    }

    void Display()
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.inData(34);
    oc2.inData(67);
    exchange(oc1, oc2);

    cout << "The value of oc1 after exchanging becomes :" << endl;
    oc1.Display();
    cout << "The value of oc2 after exchanging becomes :" << endl;
    oc2.Display();

    return 0;
}