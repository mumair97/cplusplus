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
using namespace std;

class SimpleCalculator{
    int num1, num2;
    public:
        void getNums(){
            cout << "Enter 2 numbers: " << endl;
            cin >> num1 >> num2;
        }
        int add(){
            return num1 + num2;
        }
        int sub(){
            return num1 - num2;
        }
        int mul(){
            return num1 * num2;
        }
        int div(){
            return num1 / num2;
        }
};

class ScientificCalculator{
    int num1;
    public:
        void getNum(){
            cout << "Enter 1 number: " << endl;
            cin >> num1;
        }
        int square(){
            return num1 * num1;
        }
        int cube(){
            return num1 * num1 * num1;
        }
        int power(){
            return num1 * num1 * num1 * num1;
        }
        int factorial(){
            int fact = 1;
            for(int i = 1; i <= num1; i++){
                fact *= i;
            }
            return fact;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    public:
        int add(){
            return SimpleCalculator::add();
        }
        int cube(){
            return ScientificCalculator::cube();
        }
};


int main()
{
    HybridCalculator hc;
    hc.getNums();
    cout << "Addition is: " << hc.add() << endl;
    cout << "Subtraction is: " << hc.sub() << endl;
    cout << "Multiplication is: " << hc.mul() << endl;
    cout << "Division is: " << hc.div() << endl;
    hc.getNum();
    cout << "Square is: " << hc.square() << endl;
    cout << "Cube is: " << hc.cube() << endl;
    cout << "Power is: " << hc.power() << endl;
    cout << "Factorial is: " << hc.factorial() << endl;
    

    return 0;
}