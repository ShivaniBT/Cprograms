#include <iostream>;
using namespace std;
int main(){
   //fibonacci series  with loops.
    cout<<"enter the term upto which you want fibonacci series :\n";
    int n;
    cin>>n;
    int a=1;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        
        if(i==1||i==2)
        {
            cout<<"1 ";
        }
        else
        {
            int m=a+b;
            cout<<m<<" ";
            a=b;
            b=m;
        }
    }
return 0;
}