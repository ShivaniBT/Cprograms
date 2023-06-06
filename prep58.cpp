#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
// Function objects(Functors):Function wrapped in a class so that it is available like an object.

int main()
{
    int arr[] = {1, 33, 14, 12, 54, 7};
    sort(arr, arr + 6, greater<int>()); // greater<int>()---->function object.
    // sort(arr,arr+5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}