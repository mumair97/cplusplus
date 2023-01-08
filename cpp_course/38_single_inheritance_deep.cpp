#include<iostream>
using namespace std;


class Base{
    int data1; // private so not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
};

int Base :: getData1(){
    return data1;
};

int Base :: getData2(){
    return data2;
};

class Derived : public Base{
    int data3;
    public:
        void process(); // member functions
        void display();
};

void Derived :: process(){
    data3 = data2 * getData1(); // getting data1 through method getData1, becoz it is private
};

void Derived :: display(){
    cout << "Value of data1 is " << getData1() << endl; // data1 is private, so we inherit the method
    cout << "Value of data2 is " << data2 << endl; // data2 and 3 are public, so directly inherited
    cout << "Value of data3 is " << data3 << endl;
};

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();


    return 0;
}