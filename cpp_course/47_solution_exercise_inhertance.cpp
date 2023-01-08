/*
Create 2 classes:
    1. SimpleClaculator - takes i/p of 2 nums using a utility function and perform +, -, *, /,
    and displays the results using another function.
    2. ScientificCalculator - takes i/p of 1 num using a utility function and perform any 4 scientific
    operations of your choice, and displays the results using another function.
    3. HybridCalculator - inherit SimpleCalculator and ScientificCalculator publicly and  answer:
    (create an add() function to add 2 numbers and cube a number using the inherited functions).
    Q1. What type of inheitance are you using?
    Q2. Which mode of inheritance are hou using?
    Q3. Create an object of HybridCalculator and display the result of simple and scientific calculator.
    (add() and cube()).
    Q4. How is code reuseablility implemented?

*/
#include<iostream>
#include<cmath> // new library for scientific calculator
using namespace std;


class SimpleCalculator{
    int a, b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void performSimpleOperations(){
            cout<<"The sum of a and b is: "<<a+b<<endl;
            cout<<"The difference of a and b is: "<<a-b<<endl;
            cout<<"The product of a and b is: "<<a*b<<endl;
            cout<<"The division of a and b is: "<<a/b<<endl;
        }
};

class ScientificCalculator{
    int a, b;
    public:
        void getDataScientific(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void performScientificOperations(){
            cout<<"The value of a^b is: "<<pow(a,b)<<endl;
            cout<<"The value of log(a) is: "<<log(a)<<endl;
            cout<<"The value of log(b) is: "<<log(b)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of sin(b) is: "<<sin(b)<<endl;
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of cos(b) is: "<<cos(b)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
            cout<<"The value of tan(b) is: "<<tan(b)<<endl;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    // public:
    //     void add(){
    //         cout<<"The sum of a and b is: "<<a+b<<endl;
    //     }
    //     void cube(){
    //         cout<<"The cube of a is: "<<a*a*a<<endl;
    //         cout<<"The cube of b is: "<<b*b*b<<endl;
    //     }
};

int main()
{
    // SimpleCalculator sc;
    // sc.getDataSimple();
    // sc.performSimpleOperations();

    // ScientificCalculator scc;
    // scc.getDataScientific();
    // scc.performScientificOperations();

    HybridCalculator hc;
    hc.getDataSimple();
    hc.performSimpleOperations();

    hc.getDataScientific();
    hc.performScientificOperations();
    
    // hc.add();
    // hc.cube();


    return 0;
}