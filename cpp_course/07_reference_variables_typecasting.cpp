#include<iostream>
using namespace std;

int c = 45;

int main()
{
    // reference variables

    int x = 3;
    int &y = x; // y is a reference variable which is a reference to x
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;
    cout << "The address of x is " << &x << endl;
    cout << "The address of y is " << &y << endl;

    // int &b; // error, reference variable must be initialized
    // int &b = 4; // error, reference variable must be initialized with a variable
    // int &b = a + 2; // error, reference variable must be initialized with a variable
    // int &b = (a + 2); // error, reference variable must be initialized with a variable
    // int &b = (a = 4); // error, reference variable must be initialized with a variable
    // int &b = (a == 4); // error, reference variable must be initialized with a variable
    // int &b = (a = 4) + 2; // error, reference variable must be initialized with a variable
    // int &b = (a == 4) + 2; // error, reference variable must be initialized with a variable

//-------------------------------------------------------------------------
    int a, b, c;
    cout<< "Enter the value of a" << endl;
    cin >> a;
    cout<< "Enter the value of b" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is " << c << endl;

    // bring global variable here
    cout <<"the global c is "<< ::c // :: means global c
        <<endl; 


    //--------------------------------------------
    float d = 34.4; 
    long double e = 34.4;
    cout<<"The value of d is "<<d<<" the value of e is "<<e<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; // double

    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; // float
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl; // float

    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; // long double
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl; // long double

    cout<<"The size of d is "<<sizeof(d)<<endl; // float
    cout<<"The size of e is "<<sizeof(e)<<endl; // long double

    // typecasting = converting data types
    int f = 45;
    cout<<"The value of f is "<<(float)f<<endl; // typecasting
    cout<<"The value of f is "<<float(f)<<endl; // typecasting
    cout<<"The value of f is "<<(double)f<<endl; // typecasting
    cout<<"The value of f is "<<double(f)<<endl; // typecasting

    cout<<"The value of 45.6 is "<<(int)45.6<<endl; // typecasting
    cout<<"The value of 45.6 is "<<int(45.6)<<endl; // typecasting
    cout<<"The value of 45.6 is "<<(float)45.6<<endl; // typecasting
    cout<<"The value of 45.6 is "<<float(45.6)<<endl; // typecasting

    

    return 0;
};