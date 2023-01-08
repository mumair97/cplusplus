#include<iostream>
using namespace std;

// Base Class
class Employee{
    // int id;

    public:
        int id;
        float salary;

        // constructor
        Employee(int inputId){
            id = inputId;
            salary = 12.0;
        }

        // for derived class, constructor of the base class is invoked, and for that you need
        // to write a default constructor in the base class
        Employee(){}


};

/* Derived Class Syntax

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/methods/etc...
}
    
1. default visibility mode is PRIVATE. (means if not specified)
2. Private Visibility Mode means public members of base class becomes the private members of child class.
3. Public Visibility Mode means public members of the base class becomes the public members of child class
4. Private members of the base class are never inherited.

*/

class Programmer : private Employee{
    public:
        Programmer(int inputId){
            id = inputId;
        }
        // int id;
        void getData(){
            cout << id << endl;
            cout << salary << endl;
        }

        int languageCode = 9;

};

// class Programmer : public Employee{
//     public:
//         int id;
//         void getData(){
//             cout << id << endl;
//             cout << salary << endl;
//         }
// };



int main()
{
    Employee muhammad(1), umair(2);

    cout<< muhammad.salary<<endl;
    cout<< umair.salary<<endl;

    Programmer skillF(3);
    cout<<skillF.languageCode<<endl;
    skillF.getData();

    // cout<<skillF.id<<endl; // only have access for public class
    // cout<<skillF.salary<<endl;



    return 0;
}