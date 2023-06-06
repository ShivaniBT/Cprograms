#include <iostream>
using namespace std;
// constructors in derived classes.
/*
case1:
class B:public A{};
    first A() then B()---->order of execution of constructor.

Case2:
    class A:public B,public C{};
    first B() then C() then A()---->order of execution of constructor.

Case3:
    class A:public B,virtual public C{};
    first C() then B() then A() ---->order of execution of constructor.
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called. " << endl;
    }
    void print_DataBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called. " << endl;
    }
    void print_DataBase2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called." << endl;
    }
    void print_DataDerived()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived Shivu(1, 2, 3, 4);
    Shivu.print_DataBase1();
    Shivu.print_DataBase2();
    Shivu.print_DataDerived();
    return 0;
}
// constructors for virtual base classes are invoked before an non-virtual base class.
// In(multiple inheritance) more than one base classes ,class coming first execute its constructor first.
// base class constructora executed first.