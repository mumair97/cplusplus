#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:

    Complex(int, int); // Constructor declaration; alwasy in Public// same name as Class   

    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

// Constructor definition outside the class// same name as Class
Complex::Complex(int x, int y){  // parametrized constructor as it takes 2 arguments
    a = x; 
    b = y;

    // cout<< "Hello! its Contructor here "<<endl; // output 3 times, becoz 3 objects
};



int main()
{
    // implicit call
    // Complex c1(1, 2), c2(3, 4), c3(5, 6); // contructor is called here 3 times, as the objects are created here.

    // explicit call
    Complex c1 = Complex(1, 2), c2 = Complex(3, 4), c3 = Complex(5, 6);

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}