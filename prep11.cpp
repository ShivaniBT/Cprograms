#include <iostream>
using namespace std;

class Employee
{
    int Id;
    static int count;
    // default value 0.

public:
    void setData(void)
    {
        cout << "Enter the Id:" << endl;
        cin >> Id;
        count++;
    }
    void getData()
    {
        cout << "the Id of the Employee is: " << Id << endl;
        cout << "This is employee number " << count << endl;
    }
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
        // can be called by class name with scope resolution char.,
        // cout<<Id;
        //shows error.
        // only have access to static members.
    }
};

// count is the static data member of class employee;
int Employee::count;
// int Employee::count=1000;

int main()
{
    Employee harry,rohan,lovish ;
    // harry.Id=1;
    // not accessible.
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}