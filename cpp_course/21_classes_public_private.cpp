#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // prototype declaration
        void getData(){ // to print 
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee::setData(int a1, int b1, int c1){ // definition = setData function of class Employee
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee umair;
    // umair.a = 1; // error, private
    // umair.b = 2; // error, private
    // umair.c = 3; // error, private
    umair.setData(1, 2, 3);
    umair.d = 4; // public
    umair.e = 5; // public
    umair.getData();


    return 0;
}