// to change the default functionality of the Runtime Polymorphism with pointers
// to the derived class function, we need to use virtual functions
// virtual functions are functions that are declared in the base class
// and are redefined in the derived class
// virtual functions are used to achieve Runtime Polymorphism
// virtual functions are declared in the base class using the keyword virtual


#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){ // virtual
            cout << "1 display base class variable var_base " <<var_base<< endl;
        }

};

class DerivedClass: public BaseClass{
    public:
        int var_derived=2;
        void display(){
            cout << "2 display base class variable var_base " <<var_base<< endl;
            cout << "2 display derived class variable var_derived " <<var_derived<< endl;
        }

};

int main()
{
    // Runtime Polymorphism with pointers
    // base class pointer can point to derived class object
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // object is derived class but
    // pointer is of base class so it will access base class variable
    // also called late binding
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

    
    // base_class_pointer->var_base = 34; // accessing base class variable
    base_class_pointer->display(); // accessing base class function not derived class


    
    return 0;
}