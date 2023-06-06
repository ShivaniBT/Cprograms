#include <iostream>;
using namespace std;
int main(){
    //factorial program.
    cout<<"Enter the value of n:\n";
    int n;
    cin>>n;
    int srt=1;
    for(int i=1;i<=n;i++)
    {
        srt=srt*i;
    }
    cout<<"factorial of given number "<<n<<" is "<<srt;
return 0;
}