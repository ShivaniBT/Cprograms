#include <iostream>
#include <string>
using namespace std;
// Nesting of member functions.

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter the binary number:" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();  //nesting of member function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "displaying your binary number." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // classes can have methods and properties.
    // can make members as private and public.
    // classes=structure + more.
    // structures in C++ are typedefed.
    // you can declare objects along with class declaraction.

    /*class employee{
        //class definition
    }harry,manya,aditi;*/

    binary b;
    b.read();
    // b.chk_bin();
    // b.chk_bin() is unaccesible as it is private.

    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}