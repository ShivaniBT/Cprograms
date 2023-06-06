#include <iostream>;
using namespace std;
int fib(int n)
{
    if (n==1 ||n==2){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main(){
    cout<<"enter n:";
    int n;
    cin>>n;
    cout<<"the fibonacci term of no. "<<n<<" is "<<fib(n);
    cout<<"Full fibonacci series upto n terms -:\n";
    for(int i=1;i<=n;i++)
    {
        cout<< fib(i);
        cout<<endl;
    }
return 0;
}