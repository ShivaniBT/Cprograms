#include <iostream>
using namespace std;
// copy consructor

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }

    number(number &obj)
    {
        cout << "Copy constructor called." << endl;
        a = obj.a;
    }

    void display()
    {
        cout << " The number for this object is " << a << endl;
    }

    // when no copy constructor is found ,compiler supplies its own copy constructor.
};

int main()
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x or y.

    number z1(x);       //copy constructor invoked.
    z1.display();

    z1=z;   //copy constructor not invoked.
    z1.display();

    number z3=z;
    //copy constructor invoked.
    z3.display();
    return 0;
}