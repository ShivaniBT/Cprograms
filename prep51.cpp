#include <iostream>
using namespace std;
// class templates with default parameters.

template<class T1=int, class T2=float>
class Shivu{
    public:
    T1 a;
    T2 b;
    Shivu(T1 x,T2 y){
        a=x;
        b=y;
    }
    void Display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main(){
    Shivu<>h(1,3.14);
    h.Display();
    cout<<endl;
    Shivu<float,char>h1(1.3,'o');
    h1.Display();
    return 0;
}