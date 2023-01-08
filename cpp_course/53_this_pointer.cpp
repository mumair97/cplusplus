#include<iostream>
using namespace std;

// this pointer

class A{
    int a; // class variable
    public:
        // A & setData(int a) // this is a reference to the object which invokes the member function
        void setData(int a) // priority is given to local variable 
        {
            // a = a; // this is a local variable, will give garbage value
            this->a = a; // this is a pointer to the object, invokes member function
            // return *this; // return the object which invokes the member function
        }
        void getData()
        {
            cout << "The value of a is " << a << endl;
        }
};

int main()
{
    // this is s keyword which is a pointer which points to the object which invokes the member function
    // also used to return objects of a member function
    A a;
    // a.setData(4).getData();
    a.setData(4);
    a.getData();


    return 0;
}