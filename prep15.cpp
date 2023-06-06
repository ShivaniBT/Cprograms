#include <iostream>
using namespace std;

class complex;  //declaration
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a;
    int b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // below line means sumComplex(not a member of class) is allowed to access this class's private data.
    // friend complex sumComplex(complex o1, complex o2);

    // Individually declaring functions as friends.
    // friend int calculator::sumRealComplex(complex, complex);
    // friend int calculator::sumCompComplex(complex, complex);

    // aliter: Declaring the entire class as friend.
    friend class calculator;

    void printNumber()
    {
        cout << "Your number is " << a << " + i" << b << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of the complex part of o1 and o2 is " << resc << endl;
    return 0;
}