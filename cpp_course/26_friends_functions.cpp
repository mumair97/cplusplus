#include<iostream>
using namespace std;

class Complex{
    int a, b;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // allow sumComplex function to access private stuffs
        friend Complex sumComplex(Complex o1, Complex o2);

        void printNumber(void){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    //cout<<a; // doesn't mean anything, whose a? o1 or o2 or o3? = point 6
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum; // objects of the class complex

    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    sum = sumComplex(c1, c2); // objects as arguments
    sum.printNumber();



    return 0;
}

/* properties of friend functions

1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. 
    c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
    cout<<a; // doesn't mean anything, whose a? o1 or o2 or o3? = point 6


*/