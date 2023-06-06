#include <iostream>
using namespace std;

// class templates with multiple paramenters(comma separated).

/*
template<class T1,class T2>
class NameOfClass{
    code;
};
*/

template<class T1,class T2>
class MyClass{
    public:
    T1 data1;
    T2 data2;

    MyClass(T1 a,T2 b){
        data1=a;
        data2=b;
    }

    void Display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};

int main(){
    MyClass<int,char> obj(1,'c');
    obj.Display();
    return 0;
}