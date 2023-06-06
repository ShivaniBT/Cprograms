#include <iostream>
using namespace std;

// Templates.--->parametrised classes.
// Why use templates?--->DRY run principle
//                  ---->generic programming


// syntax for templates
// T can be float ,int,char etc.

// template<class T>
// class vector{
//     T*arr;
//     public:
//     vector(T*ar){
//          code.
//     }
//      may other methods
// };
// A lot more classes can be created using templates.

template<class T>
class Vector{
    T size;
    public:
        T *arr;
        Vector(int m){
            size=m;
            arr=new T[size];
        }
        T dotProduct(Vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }
};


int main(){
    Vector<int> v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;

    Vector <int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    int a=v1.dotProduct(v2);
    cout<<a<<endl;

    // int ptr[1];
    // float ptr1[1];
    // vector<int> myvec(ptr);
    // vector<float> myfvec(ptr1);
    return 0;
}