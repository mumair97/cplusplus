// classes are custom data types
// classes are user defined data types
// c

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // creating a Constructor.
    // Constructor is a special member function with the same name as of the class. 
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.
    // It is used to give values to the data members of the class when an object of the class is created.
    // It has no return type.
    // It can have default arguments.

    Complex(void); // Constructor declaration // same name as Class   

    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

// Constructor definition outside the class// same name as Class
Complex::Complex(void){  // default constructor as it has no arguments
    a = 10; // if not initialized, compilor will put garbage value in output
    b = 20;

    cout<< "Hello! its Contructor here "<<endl; // output 3 times, becoz 3 objects
};



int main()
{
    Complex c1, c2, c3; // contructor is called here 3 times, as the objects are created here.
    // cout<<c1.a<<endl; //can't access as it is private

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/* Characteristics of Constructors

1. it should be declared in  the public section of the class
2. they are automatically invoked whenever an object is created
3. they cannot return values and do not have return types
4. it can have default arguments
5. a constructor without arguments is called default constructor
6. we cannot refer to their address



*/