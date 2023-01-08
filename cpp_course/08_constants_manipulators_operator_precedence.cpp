#include<iostream>
using namespace std;

int main()
{
    
    int a = 4;
    cout<<"The value of a was "<<a<<endl;
    a = 45;
    cout<<"The value of a is "<<a<<endl;

    // Constants
    const int g = 9.8;
    cout<<"The value of g is "<<g<<endl;
    // g = 1.2; // error becoz g is const and cannot be changed

    // Manipulators: 
    // endl: end line
    // ends: end string
    // flush: flush the buffer
    // setw(4):  set width or spaces of 4

    cout<<"The value of a is "<<a<<endl; 
    cout<<"The value of a is "<<a<<ends;
    cout<<"The value of a is "<<a<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<a<<flush;
    cout<<"The value of a is "<<a<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<a<<ends;
    cout<<"The value of a is "<<a<<flush;
    cout<<"The value of a is "<<a<<endl;

    // Operator Precedence
    int x = 3, y = 4;
    int z = x*5 + y;
    cout<<"The value of z is "<<z<<endl;


    return 0;
}