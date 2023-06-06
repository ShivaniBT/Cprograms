#include <iostream>
#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int count;

public:
    void initCounter()
    {
        count = 0;
    }
    void displayPrice();
    void setPrice();
};

void shop::setPrice()
{
    cout << "enter Id of your item no." << count + 1 << endl;
    cin >> itemId[count];
    cout << "Enter Price of your Item" << endl;
    cin >> itemPrice[count];
    count++;
}

void shop::displayPrice()
{
    for (int i = 0; i < count; i++)
    {
        cout << "The price of item with itemId " << itemId[i] << " is Rs. " << itemPrice[i] << endl;
    }
}

int main()
{
    cout << "I love you Alfanse." << endl;
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}