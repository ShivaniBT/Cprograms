
#include <iostream>;
using namespace std;
    //program for Fibonacci Series unto n terms .
    //1 1 2 3 5 8 13 ....and so on.
    int fib(int n)
    {
        int m=1;
        int p=1;
        cout<<"1\n 1\n ";
        for(int i=3;i<=n;i++)
        {
            int k=m+p;
            cout<<k<<endl;
            //return k;   will not work.(breaks the loop.)
            cout<<endl;
            m=p;
            p=k;
        }
    }
int main()
{
    cout<<"tell us upto which term you want fibonacci series:";
    int n;
    cin>>n;
    cout<<"the required series is\n :";
    cout<<fib(n);
    return 0;
}

