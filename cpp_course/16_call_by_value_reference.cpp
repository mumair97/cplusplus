#include <iostream>
using namespace std;

// call by value = this will not swap 
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference using pointers = this will swap
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a, int &b) // this will swap a, b using reference variable
{
    int temp = a;
    a = b;
    b = temp;
}

//using return &
int & swapReferenceVarReturn(int &a, int &b) // this will swap a, b using reference variable
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 5, y = 6;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    
    // x, y will not change
    // swap(x, y);

    // swap Pointer = x, y will change
    // swapPointer(&x, &y);

    // swap Reference Var = x, y will change
    // swapReferenceVar(x, y);

    //return &
    swapReferenceVarReturn(x, y) = 755;

    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
