#include<iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;

    // arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl; //0
    cout << "The value of a % b is " << a % b << endl; // reminder
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    // assignment operators
    int c = 34;
    c += 2;
    c -= 2;
    c *= 2;
    c /= 2;
    cout << "The value of c is " << c << endl;

    // comparison operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    // logical operators
    cout << "The value of this logical and operator ((a==b) && (a<b)) is: " << ((a==b) && (a<b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is: " << ((a==b) || (a<b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is: " << (!(a==b)) << endl;

    // bitwise operators
    cout << "The value of 2&3 is " << (2&3) << endl;
    cout << "The value of 2|3 is " << (2|3) << endl;
    cout << "The value of 2^3 is " << (2^3) << endl;
    cout << "The value of ~2 is " << (~2) << endl;
    cout << "The value of 2<<1 is " << (2<<1) << endl;
    cout << "The value of 2>>1 is " << (2>>1) << endl;

    // member of c++ operator
    int d = 34;
    cout << "The value of d is " << d << endl;
    cout << "The value of d++ is " << d++ << endl;
    cout << "The value of d is " << d << endl;
    cout << "The value of ++d is " << ++d << endl;
    cout << "The value of d is " << d << endl;

    // ternary operator
    int e = (a==b) ? 34 : 89;
    cout << "The value of e is " << e << endl;

    // comma operator
    int x, y;
    (x = 2, y = 3);
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;

    return 0;
}