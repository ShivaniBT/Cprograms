#include <iostream>;
using namespace std;
    //program for Fibonacci Series unto n terms .
    //1 1 2 3 5 8 13 ....and so on.
    void fib(int n)
    {
        int m=1;
        int k=1;
        for(int i=1;i<=n;i++)
        {
            if (i==1 || i==2)
            {
                cout<<"1"<<endl;
            }
            else
            {
                int r=m+k;
                cout<<r<<endl;
                m=k;
                k=r;
            }
        }
    }
int main()
{
    cout<<"tell us upto which term you want fibonacci series:";
    int n;
    cin>>n;
    cout<<"the required series is :\n";
    fib(n);
    return 0;
}

