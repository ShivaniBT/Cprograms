#include <iostream>
using namespace std;
// Destructor never takes an argument nor returns any value.
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when the constructor is called for object number." << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "crerating first object n1." << endl;
    num n1;
    {
        cout << "Entering this block." << endl;
        cout << "creating two more objects " << endl;
        num n2, n3;
        cout << "Exiting this block." << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}