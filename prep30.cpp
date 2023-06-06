#include <iostream>
using namespace std;

// Multilevel Inheritance.
class Student
{
protected:
    int roll_number;

public:
    void set_Roll_Number(int);
    void get_Roll_Number();
};

void Student::set_Roll_Number(int r)
{
    roll_number = r;
}

void Student::get_Roll_Number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "Marks obtained in maths are " << maths << " and in Physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void Display_result()
    {
        get_Roll_Number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result shivu;
    shivu.set_Roll_Number(420);
    shivu.set_marks(85.0, 90.0);
    shivu.Display_result();
    return 0;
}

// If we are inheriting Bfrom A and C fron B ---->  [ A--->B--->C ]
// 1.  A is the Base class for B and B is the base class for C.
// 2.  ABC is called the inheritance path.