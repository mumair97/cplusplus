// constructor overloading
// 2 or more constructors of the same name but different arguments

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:

    Complex(int x, int y){
        a = x; 
        b = y;

    }

    Complex(int x){
        a = x; 
        b = 0;

    }

    Complex(){
        a = 0; 
        b = 0;

    }

    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1(1, 2);
    c1.printNumber();

    Complex c2(3);
    c2.printNumber();

    Complex c3;
    c3.printNumber();


    return 0;
}