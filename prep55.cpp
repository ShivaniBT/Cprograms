#include <iostream>
#include <vector>

//cplusplus reference page.

using namespace std;
template<class T>
void Display(vector<T> &v)
{
    cout<<"Displaying this vector:"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout<<v.at(i)<<" ";
    }
    cout << endl;
}
int main()
{
    // ways to create a vector.

    int element, size=5;

    // vector<int> vec1;     //zero length integer vector.
    // Display(vec1);

    // vector<char> vec2(4);       //4 element char vector.
    // vec2.push_back('5');
    // Display(vec2);

    // vector<char> vec3(vec2);
    // Display(vec3);      //4 element char vector from vec2.

    vector<int> vec4(4,3);     //6 element vector of 3s
    Display(vec4);
    cout<<vec4.size();


    // cout << "Enter the size of your vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector\n";
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    // vec1.pop_back();
    // Display(vec1);

    // vector<int>::iterator iter=vec1.begin();
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter+1,5,566);  //vector.insert(iterator+x,repetition,value)

    // Display(vec1);

    return 0;
}