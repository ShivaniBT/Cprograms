#include <iostream>
using namespace std;

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
    friend complex sumComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "Your number is " << a << " + i" << b << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();
    sum=sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
// properties of friend functions
/*  1.not in the scope of class.
    2.cannot be called from the object of that class. c1.sumComplex()->not allowed.
    3.can be invoked without the help of any object.
    4.usually contains objects as arguments.
    5.Can be declared inside public or private swection of the class.
    6.It cannot access the the membersdirectly by their names and need (object_name.member.name) to access the member.
*/