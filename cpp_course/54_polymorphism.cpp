#include<iostream>
using namespace std;


int main()
{
    //Polymorphism
    // - one name and multiple forms
    // - e.g. Function overloading, operator overloading
    // - e.g. Virtual Functions
    // - e.g. Templates

    /*
    Polymorphism in Cpp can be of 2 types:
    1. Compile time Polymorphism
        - Function overloading
        - Operator overloading

    2. Runtime Polymorphism
        - Virtual Functions
    */

    // 1. Compile time Polymorphism
    // 1.1 Function overloading
    // - same function name with different parameters
    // - C++ decides which function to call based on the parameters passed
    // - return type can be different
    // - access modifier can be different
    // - default arguments can be different

    // 1.2 Operator overloading
    // - same operator with different parameters
    // - C++ decides which operator to call based on the parameters passed

    // 2. Runtime Polymorphism
    // 2.1 Virtual Functions
    // - same function name with different parameters
    // - C++ decides which function to call based on the object type
    // - return type can be different
    // - access modifier can be different
    // - default arguments can be different

    
    return 0;
}