#include<iostream>
using namespace std;

// function prototype = you can write your functions even below the main()
// type function-name (arg);
int sum(int a, int b); //acceptable
// int sum(int, int); //acceptable

// void greetings(void); //acceptable
void greetings(); //acceptable




int main()
{

    int num1, num2;
    cout << "Enter first number: "<<endl;
    cin >> num1;
    cout << "Enter second number: "<<endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is " << sum(num1, num2) << endl;

    greetings();


    return 0;
}

// function
int sum(int a, int b){
    // formal paramteres a, b will be taking values from actual parameters num1, num2
    int c = a + b;
    return c;
} 

void greetings(){
    cout << "\nGood Morning" <<endl; // \n = next line 
}