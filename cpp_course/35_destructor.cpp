/*
Destructor never takes an argument nor does it return any value
Destructor has same name as the class with a tilde(~) sign before it.
Destructor is called automatically when the object goes out of scope.
Destructor cannot be called explicitly.
Destructor cannot be overloaded.
Destructor is very useful for releasing the memory, closing files, closing network connections, etc.

*/

#include<iostream>
using namespace std;

int count = 0; // global variable

class num{
    public:
    num(){
        count++; // count is red, becoz there could be confusion with global var, if there is local variable.
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};


int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    { // block starts
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    } // as this block ends, destructor is called and objects n2, n3 are removed to free memory.
    // so when ever you temporary need object, use block and destructor.
    // you may use destructor with dynamic memory allocations, and everything.
    cout<<"Back to main"<<endl;



    return 0;
}