#include <iostream>
using namespace std;

// create two classes
/*
1. simpleCalculator.-       take input of two numbers using a utility function and performs +,-,* and / and displays the result
using another function.
2.scientificCalculator-     take input of two numbers using a utility function and performs any four scientific operations.and displays the result
using another function.

create another class HybridCalculator and inherit it using these 2 classes.

*/

class SimpleCalculator{
    float a;
    float b;
    public:
    float set_num(float,float);
    void get_num(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
    void Calc();
};

float SimpleCalculator::set_num(float n1,float n2){
    a=n1;
    b=n2;
}

void SimpleCalculator::Calc(){
    get_num();
    cout<<"Select the operation:"<<endl;
    cout<<"1. + \n 2. - \n 3. * \n 4. / "<<endl;
    char op;
    cin>>op;
    if(op=='+'){
        float sum=a+b;
        cout<<"Sum for "<<a<<" and "<<b<<" is "<<sum<<endl;
    }
    else if(op=='-'){
        float sub=a-b;
        cout<<"subtraction for "<<a<<" and "<<b<<" is "<<sub<<endl;
    }
    else if(op=='*'){
        float multiple=a*b;
        cout<<"multiply for "<<a<<" and "<<b<<" is "<<multiple<<endl;
    }
    else if(op=='/'){
        float div=a/b;
        cout<<"division for "<<a<<" and "<<b<<" is "<<div<<endl;
    }
}

class ScientificCalc{
};

int main()
{

    return 0;
}