#include<iostream>
using namespace std;

// Forward declaration = becoz we are using Complex in Calculator class, but we haven't defined it yet.
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        // Prototype declaration
        int sumRealComplex(Complex, Complex); //can't write o and p in arg here.
        int sumImagComplex(Complex, Complex); // becoz in forward declaration, only Complex is defined, not o and p.
};

class Complex{
    int a, b;

    // make the whole class (Complex) a friend of another class member function to access private stuff
    friend int Calculator::sumRealComplex(Complex o, Complex p);// if you wish, no need to write o and p above.
    friend int Calculator::sumImagComplex(Complex o, Complex p); 

    // make the whole class (Complex) a friend of another class (Calculator)
    // friend class Calculator;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(void){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator::sumRealComplex(Complex o, Complex p){
    return (o.a + p.a);
};

int Calculator::sumImagComplex(Complex o, Complex p){
    return (o.b + p.b);
};


int main()
{
    Complex o, p; // objects of the class complex
    Calculator calc;

    o.setNumber(1, 2);
    o.printNumber();

    p.setNumber(3, 4);
    p.printNumber();

    int resultReal = calc.sumRealComplex(o, p);
    int resultImag = calc.sumImagComplex(o, p);

    cout<<"The sum of real part of o and p is "<<resultReal<<endl;
    cout<<"The sum of imaginary part of o and p is "<<resultImag<<endl;

    // or

    // cout<<"The sum of real part of o and p is "<<calc.sumRealComplex(o, p)<<endl;
    // cout<<"The sum of imaginary part of o and p is "<<calc.sumImagComplex(o, p)<<endl;



    return 0;
}

/* properties of friend functions

1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. 
    c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
    cout<<a; // doesn't mean anything, whose a? o1 or o2 or o3? = point 6


*/