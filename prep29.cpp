#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

// class Derived: private Base
class Derived : protected Base
{
};

// For a protected member:
/*                          public derivation                   private derivation                  protected derivation
1.Private members             not inherited                        not inherited                         not inherited
2.Protected members             protected                             private                              protected
3.Public members                 Public                               private                              protected
*/

int main()
{
    Base b;
    // cout<<b.a;   ---->protected can not be inherited directly
    Derived d;
    // cout<<d.a;    ---->protected can not be inherited directly
    return 0;
}