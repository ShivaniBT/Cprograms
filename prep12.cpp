#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId()
    {
        cout << "Enter Id of the employee:";
        cin >> Id;
    }
    void getId()
    {
        salary = 122;
        cout << "The Id of this employee is " << Id << endl;
    }
};
int main()
{
    // Employee harry,rohan,lovish,shruti;
    // harry.setId();
    // harry.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}