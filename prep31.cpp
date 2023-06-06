#include <iostream>
using namespace std;
// Multiple inheritance.

// syntax for inheriting in multiple inheritance.
// class derived:visibility-mode base1,visibility-mode base2.....so on{class body};

class Base1
{
protected:
    int base1Int;

public:
    void set_base1Int(int a)
    {
        base1Int = a;
    }
};

class Base2
{
protected:
    int base2Int;

public:
    void set_base2Int(int b)
    {
        base2Int = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1Int << endl;
        cout << "The value of Base2 is " << base2Int << endl;
        cout << "The sum of these values  is " << (base1Int + base2Int) << endl;
    }
};

// Then inherited derived class will look something like this
/*
class members:
base1Int    --->protected
base2Int    --->protected
member functions:
    set_base1Int() --->public
    set_base2Int() --->public
    show()         --->public
*/

int main()
{
    Derived shivu;
    shivu.set_base1Int(25);
    shivu.set_base2Int(5);
    shivu.show();
    return 0;
}