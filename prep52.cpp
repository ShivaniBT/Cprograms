#include <iostream>
using namespace std;

// Function Template

// template<class T1,class T2>
// float FuncAverage(T1 a,T2 b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    // float a;
    // a=FuncAverage(4,3);
    // cout<<"The average value is"<<a<<endl;

    int x=4,y=9;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}