#include<iostream>
using namespace std;

// Forward declaration = becoz we are using C2 in C1 class, but we haven't defined C2 yet.
class C2;

class C1{
    int val1;
    friend void exchange(C1 &, C2 &); // friend function


    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }

};

class C2{
    int val2;
    friend void exchange(C1 &, C2 &); // friend function

    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

/* Trick to swap 2 numbers a, b

temp = a;
a = b;
b = temp;

*/

void exchange(C1 &x, C2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
};


int main()
{
    C1 oc1;
    oc1.indata(34);
    oc1.display();

    C2 oc2;
    oc2.indata(67);
    oc2.display();

    exchange(oc1, oc2);

    // the values after exchange
    oc1.display();
    oc2.display();

    return 0;
}
