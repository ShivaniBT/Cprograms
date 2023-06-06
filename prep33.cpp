#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kese ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World." << endl;
    }
};

class D : public B
{
    int a;

public:
    void say()
    {
        cout << "Hello my beautiful people." << endl;
    }
};
// Inherited class will prefer its own function over Base class function.
int main()
{

    // ambiguity1
    // Base1 base1obj;
    // base1obj.greet();
    // Base2 base2obj;
    // base2obj.greet();
    // Derived d;
    // d.greet();

    // Ambiguity2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}