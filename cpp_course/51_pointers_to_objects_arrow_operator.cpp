#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
        void setData(int a, int b)
        {
            real = a;
            imag = b;
        }
        void getData()
        {
            cout << "The complex number is " << real << " + " << imag << "i" << endl;
        }
};

int main()
{
    Complex c1;
    // c1.setData(1, 4);
    // c1.getData();

    Complex *ptr = &c1;
    // or
    // Complex *ptr = new Complex;

    // (*ptr).setData(1, 54); // dereferencing
    ptr->setData(1, 54); // arrow operator
    // (*ptr).getData();
    ptr->getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 54);
    ptr1->getData();

    return 0;
}