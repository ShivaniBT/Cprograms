#include <iostream>
using namespace std;
// base class--->
class employee
{
public:
    int Id;
    float salary;

    employee() {}
    employee(int inpId)
    {
        Id = inpId;
        salary = 34;
    }
};

// derived class--->
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
// default visibility mode is private.
// private visibility mode--->
// public member of the base class becomes private member of the derived class.

// public visibility mode--->
// public member of the base class becomes public member of the derived class.

// private members of the base class will never get inherited in derived class.

// creating a programmer class derived from employee class.

// class programmer : public employee     //publicvisibility.

class programmer : public employee // default private visibility.
{
public:
    int languageCode = 9;
    programmer(int inpId)
    {
        Id = inpId;
    }
    void getData()
    {
        cout << Id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    // cout<<skillF.Id<<endl;       ---> if public visibility.
    return 0;
}