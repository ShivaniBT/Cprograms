#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void printNumber()
    {
        cout << "Your number is " << a << " + i" << b << endl;
    }
    complex(int x, int y); // constructor declaration
};

complex::complex(int x, int y) // parametrized constructor as it takes 2 parameters.
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    complex a(4, 6);
    a.printNumber();

    // explicit call
    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}