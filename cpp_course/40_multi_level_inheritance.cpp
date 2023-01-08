#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_number(int);
        void get_number(void);
};

void Student :: set_number(int a){
    roll_number = a;
};

void Student :: get_number(void){
    cout << "Your roll number is " << roll_number << endl;
};

class Exam: public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
};

void Exam :: get_marks(void){
    cout << "Your result is here: " << endl
         << "Maths: " << maths << endl
         << "Physics: " << physics << endl;
};

class Result: public Exam{
    float percentage;
    public:
        void display_results(){
            get_number();
            get_marks();
            cout << "Your percentage is " << (maths + physics)/2 << "%" << endl;
        }
};

int main()
{
    Result umair;
    umair.set_number(420);
    umair.set_marks(70, 80);
    umair.display_results();


    return 0;
}

/*
    Notes:
    - if we are inheriting B from A and C from B = Multi-level inheritance [A --> B --> C]
    - A is base class for B, and B is base class of C
    - A --> B --> C is called inheritance Path.
    - Inheritance is a way to reuse code
    - Inheritance is a way to extend the functionality of a class
*/