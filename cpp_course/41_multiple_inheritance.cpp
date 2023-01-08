/* Multiple inheritance = Derived class from two or more base classes
    
    Syntax:

    class Derived_class : visibility-mode base_class1, visibility-mode base_class2
    {
        class body of derived class
    };

*/

#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void setBase1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void setBase2int(int a){
            base2int = a;
        }
};

class Base3{
    protected:
        int base3int;
    public:
        void setBase3int(int a){
            base3int = a;
        }
};

class Derived : public Base1, public Base2, public Base3{
    public:
        void show(){
            cout << "The value of base1int is " << base1int << endl;
            cout << "The value of base2int is " << base2int << endl;
            cout << "The value of base3int is " << base3int << endl;
            cout << "The sum of base1int and base2int is " << base1int + base2int + base3int << endl;
        }
};


int main()
{
    Derived der;
    der.setBase1int(10);
    der.setBase2int(20);
    der.setBase3int(30);
    der.show();

    return 0;
}