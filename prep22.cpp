#include <iostream>
using namespace std;

class simple{
    int data1,data2;
    public:
    simple (int a,int b=9){
        data1=a;
        data2=b;
    }

    void printData(){
        cout<<" The value of data is "<<data1<<" and "<<data2<<endl;
    }
};

int main(){
    simple s(1,2);
    s.printData();

    simple m(5);
    m.printData();
    return 0;
}