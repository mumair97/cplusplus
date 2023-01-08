#include<iostream>
using namespace std;


// Forward declaration = becoz we are using Y in X class, but we haven't defined Y yet.
class Y;

class X{
    int a;
    public:
        void setValue(int value){
            a = value;
        }
    friend void add(X, Y); // friend function

};

class Y{
    int b;
    public:
        void setValue(int value){
            b = value;
        }
    friend void add(X, Y); // friend function
};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<<o1.a + o2.b<<endl;
}


int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add(a1, b1);


    return 0;
}