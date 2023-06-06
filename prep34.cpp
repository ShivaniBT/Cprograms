#include <iostream>
using namespace std;
// Virtual Base Class.
class Student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_Number(){
        cout<<"Your Roll number is "<<roll_no<<endl;
    }
};

class Test:virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_Marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_Marks(){
        cout<<"Your result is here: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }
};

class Sports:virtual public Student{
    protected:
    float score;
    public:
    void set_Score(float sc){
        score=sc;
    }
    void print_Score(){
        cout<<"Your PT score is: "<<score<<endl;
    }
};

class Result:public Test,public Sports{
    private:
    float total;
    public:
    void Display(){
        total=maths + physics + score;
        print_Number();
        print_Marks();
        print_Score();
        cout<<"Your total score is "<<total<<endl;
    }
};

int main(){
    Result Shivu;
    Shivu.set_number(61);
    Shivu.set_Marks(78.5,96.0);
    Shivu.set_Score(9);
    Shivu.Display();
    return 0;
}