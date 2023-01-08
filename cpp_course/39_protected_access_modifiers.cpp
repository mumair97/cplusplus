/* Protected access Modifiers

                        Public Derivation      	Private Derivation    	Protected Derivation
Private members        	Not Inherited         	Not Inherited          	Not Inherited              
Protected members       Protected              	Private               	Protected                    
Public members         	Public	                Private             	Protected               

*/

#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    public:
        int b;
};

class Derived : protected Base{
    public:
        void setBase(){
            a = 10;
            b = 20;
        }
        void display(){
            cout << "Value of a is " << a << endl;
            cout << "Value of b is " << b << endl;
        }
};

int main()
{
    Base b;
    // b.a = 10; // protected inheritance, so can't access it now
    b.b = 20; // public inheritance, so can access it now
    
    Derived d;
    // d.a = 10; // protected inheritance, so can't access it now
    // d.b = 20; // protected inheritance, so can't access it now
    d.setBase();
    d.display();



    return 0;
}