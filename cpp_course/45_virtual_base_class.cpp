/*
                            <------Student------>
                            |                   |   
                            Test            Sports
                            |                   |
                            ------>Results<------

    1. the Results is receiving the values 2 times, in this case "set_roll_number()", once from Test()
    and once from Sports()
    2. If we don't use virtual base class then we will get error
    3. If we use virtual base class then we will get correct output


Student ---> Test   ---> Result
        ---> Sports ---> Result
        

*/

#include<iostream>
using namespace std;

// virtual base class

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int a){ // if not virtual = error: request for member 'set_roll_number' is ambiguous
            roll_number = a;
        }
        void print_roll_number(){
            cout << "Your roll number is " << roll_number << endl;
        }
};

class Test:  virtual public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout << "Your Result is here: " << endl
                 << "Maths: " << maths << endl
                 << "Physics: " << physics << endl;
        }
};

class Sports:  virtual public Student{ // same as public virtual Student
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout << "Your Swimming score is " << score << endl;
        }
};

class Result: public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_roll_number();
            print_marks();
            print_score();
            cout << "Your total score is " << total << endl;
        }
};


int main()
{
    Result umair;
    umair.set_roll_number(40);
    umair.set_marks(70, 80);
    umair.set_score(9);
    umair.display();

    return 0;
}