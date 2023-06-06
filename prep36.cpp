#include <iostream>
using namespace std;
// initialising list in Constructors.
/*
Syntax for initialisation list in constructor:
constructor(argument-list): initialising-section
{
    assignment +code;
}
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b)--->will create error as a is declared before b in class.
    Test(int i, int j) : a(i), b(j)
    {
        // a=i;
        // b=j;
        cout << "Constructor executed." << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4,6);
    return 0;
}