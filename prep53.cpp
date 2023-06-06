#include <iostream>
using namespace std;

template<class T>
class Shivu{
    public:
        T data;
        Shivu(T a){
            data=a;
        }
        void Display();
};

template <class T>
void Shivu<T>::Display(){
            cout<<data;
        }

void func(int a){
    cout<<"This is first func() "<<a<<endl;
}

template<class T>
// void func1(T a){
void func(T a){
    cout<<"This is templatised func() "<<a<<endl;
}

int main(){
    // Shivu<int>h(5);
    // cout<<h.data<<endl;
    // h.Display();

    func(4);    //exact match takes the highest priority.
    // func1(4);    //exact match takes the highest priority.
    return 0;
}