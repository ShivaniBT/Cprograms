#include <iostream>
using namespace std;
void swap(int*a,int*b){
    //address of a ko b assign krna h.
    //int*c=&a;
    //*c=b;
    //int*d=&b;
    //*d=a;
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    //use of pointer concept.
    int x=45,y=34;
    int *c=&x;
    int *d=&y;
    cout<<c<<endl<<d<<endl;
    cout<<*c<<endl<<*d<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<"value of a and b first are "<<x<<" and "<<y<<endl;
    swap(x,y);
    cout<<"value of a and b after swaping are "<<x<<" and "<<y<<endl;
    return 0;
}