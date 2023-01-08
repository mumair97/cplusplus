/* initialization list in constructor = to initialize class object = writing init section with class
syntax:
class_name (argument_list): initialization_section{   
    body of constructor
}
init. section = list of member variables and their initial values = separated by commas
init. section = executed before body of constructor
init. section = used to initialize const member variables = const member variables = initialized in initialization section only
init. section = used to initialize reference member variables = reference member variables = initialized in initialization section only
init. section = used to initialize base class objects = base class objects = initialized in initialization section only
init. section = used to initialize member objects = member objects = initialized in initialization section only
init. section = used to initialize static member variables = static member variables = initialized in initialization section only
init. section = used to initialize static member objects = static member objects = initialized in initialization section only
init. section = used to initialize static const member variables = static const member variables = initialized in initialization section only
init. section = used to initialize static const member objects = static const member objects = initialized in initialization section only

*/

#include<iostream>
using namespace std;

class Test{
    int a; // a is initialized first
    int b;
    public:
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(2 * j)
        // Test(int i, int j): a(i), b(a+j)
        // Test(int i, int j): b(i), a(i+b) // error = a gives garbage value = becoz a is initialized first
        Test(int i, int j): a(i)
        {
            b = j;
            cout<<"Constructor called"<<endl;
        }
        void printData(void){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};


int main()
{
    Test t(4, 6);
    t.printData();

    return 0;
}