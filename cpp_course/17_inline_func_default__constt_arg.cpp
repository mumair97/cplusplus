#include<iostream>
using namespace std;

inline int product(int a, int b){
    // inline function means the function instead of repeating the whole procedure, 
    //function will copied in the statement and directly compiled which will save the time in compilation.
    // enhancement feature that improves the execution time and speed of the program with repeat cout's
    // Not recommended to use below lines with inline functions
    // static int c = 0; // will execute only once
    // c = c + 1; 
    
    
    return a*b;
}

// default argument
float moneyReceived(int currentMoney, float factor= 1.04){
    return currentMoney * factor;
}
// constant arguments
// int strlen(const char *p) // don't/can't change p

int main(){

    int a, b;
    // cout << "Enter first two numbers: "<<endl;
    // cin >> a >> b;
    
    //// num1 and num2 are actual parameters
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;
    // cout << "The product is " << product(a, b) << endl;

    // default argument
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year." << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year." << endl;



    return 0;
}