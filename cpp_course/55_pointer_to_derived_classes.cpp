#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout << "display base class variable var_base " <<var_base<< endl;
        }

};

class DerivedClass: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout << "display base class variable var_base " <<var_base<< endl;
            cout << "display derived class variable var_derived " <<var_derived<< endl;
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

    
    base_class_pointer->var_base = 34; // accessing base class variable
    base_class_pointer->display(); // accessing base class function not derived class

    // base class pointer cannot access derived class variable
    // 
    // base_class_pointer->var_derived = 45; // accessing derived class variable == error
    // base_class_pointer->display(); // accessing derived class function

    // derived class pointer can point to base class object
    DerivedClass * derived_class_pointer;
    // derived_class_pointer = &obj_base; // pointing derived class pointer to base class = error
    derived_class_pointer = &obj_derived; // pointing derived class pointer to derived class

    // object is base class but 
    // pointer is of derived class so it will access base class variable
    // also called late binding
    derived_class_pointer->var_derived = 444; // accessing base class variable
    derived_class_pointer->display(); // accessing base class function not derived class


    
    return 0;
}