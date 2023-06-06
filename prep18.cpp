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
    // creating a constructor.
    // constructor is a special member function with samr name as of the class.
    // it is used to initialise the objects of its class.
    // it is automatically invoked whenever an object is created.
    complex(void);      // constructor declaration
};

complex::complex(void)  //default constructor as it accepts no parameters.
{
    a=0;
    b=0;
}

int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
//characterstics of constructors
// 1.It should be declared in public section of the class.
// 2. They are automatically invoked whenever the object is created.
// 3. They cannot return values and do not have return types
// 4. It can have default arguments.
// 5.We cannot refer to their address.