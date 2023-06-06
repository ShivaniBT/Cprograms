#include <iostream>
#include<cstring>
#include <fstream>
using namespace std;
// working with files.

// the useful classes for working with files in C++ are:
/*
1. fstreambase
2. ifstream--->derived from fstreambase
3. ofstream--->derived from fstreambase

In order to work wit files in C++, you will have to open a file.There are two ways to open a file:
        1. Using the constructor
        2.Using the member function open() of the class
*/
int main()
{
    string st1="Shivani Bhardwaj";
    string st2;
    // opening file using constructor and write into it
    // ofstream out("sample1.txt");    //write operation
    // out<<st;

    // opening file using constructor and reading it
    ifstream in("sample2.txt");    //read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}