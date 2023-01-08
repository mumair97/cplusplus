#include<iostream>
using namespace std;


class Employee{
    int id;
    static int count; // static variable (class variable) default value always 0, so no count=0 needed.
    // static variable is for all objects.
    // if we don't write static, count variable will be 1 for all objects umair, muham, and haris
    // becoz count will initialize itself for new object.
    // if we write static, count variable will be 1 for umair, 2 for muham, and 3 for haris
    // now its class property and not objects property.

    public:
        void setData(void){
            cout<<"Enter the id: ";
            cin>>id;
            count++;

        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl; 
        }

        // static member functions
        static void getCount(void){
            // cout<<id; // error, static function can't access non-static data member
            cout<<"The value of count is "<<count<<endl;
        }
};

// count is the "static data member" of the class Employee
int Employee:: count; //becoz we can't access the private 
// we can init. count=1000; 
// but not static int count=1000;  inside the class // wrong 


int main()
{
    Employee umair, muhammad, haris;
    
    // umair.id = 1; // private, so error for both
    // umair.count = 1;

    umair.setData();
    umair.getData();
    Employee::getCount(); // static function can be accessed by class name
    
    muhammad.setData();
    muhammad.getData();
    Employee::getCount(); // directly accessed // not referenced with objects

    haris.setData();
    haris.getData();
    Employee::getCount();



    return 0;
}