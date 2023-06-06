#include <iostream>
#include<fstream>

using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample1.txt");
    string name;
    cout<<"enter your name:"<<endl;
    cin>>name;

    //writing a string to the file
    hout<<"My name is "+name;

    // closing this file stream hout
    hout.close();

    ifstream hin("sample1.txt");
    string content;
    // hin>>content;
    getline(hin,content);
    cout<<"The content of this file is "<<content<<endl;
    hin.close();
    return 0;
}