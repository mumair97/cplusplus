#include<iostream>
using namespace std;

int main()
{
    // What is a pointer? ---> data type which stores the address of another variable

    int a=3;
    int *b = &a; // b is a pointer, points to a (points to the address of a)

    // * == (value at) Operator
    // & == (address of) Dereference operator

    // cout << "The address of a is: " << &a << endl;
    // cout << "The address of a is: " << b << endl;

    // cout << "The value of a is: " << a << endl;
    // cout << "The value of a is: " << *b << endl; // value at b

    // cout << "The address of b is: " << &b << endl; // address at b

    // cout << "The value of b is: " << b << endl;
    // cout << "The value of b is: " << *(&b) << endl;
    // cout << "The value of b is: " << *&b << endl;
    // cout << "The value of b is: " << *&*&b << endl;


    // Pointer to Pointer
    
    int **c = &b;

    cout << "The address of b is: " << &b << endl;
    cout << "The address of b is: " << c << endl;

    cout << "The value of b is: " << b << endl;
    cout << "The value of b is: " << *c << endl;
    cout << "The value of b is: " << **c << endl;





    return 0;
}