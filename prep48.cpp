#include <iostream>
#include<cstring>
#include <fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("sample1.txt");
    out<<"This is me\n";
    out<<"My hobby is laughing.\n";
    out.close();

    ifstream in;
    in.open("sample1.txt");
    string st,st2;
    // getline(in,st);
    // getline(in,st2);
    // cout<<st<<endl<<st2<<endl;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}