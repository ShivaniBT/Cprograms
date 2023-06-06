#include <iostream>
#include <list>
using namespace std;

// List.(insertion/deletion faster.)

void Display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // removing elements from the list.
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);

    // sorting the list
    // list1.sort();

    Display(list1);

    list<int> list2(3); // enpty list of size 7.
    list<int>::iterator iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 12;
    iter++;
    *iter = 23;
    iter++;

    Display(list2);

    // list1.sort();
    // list2.sort();

    // merging the lists.
    list1.merge(list2);
    cout << "list1 after merging: " << endl;

    // reversing the list.
    list1.reverse();
    Display(list1);
    return 0;
}