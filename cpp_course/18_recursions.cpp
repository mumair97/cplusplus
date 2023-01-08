#include<iostream>
using namespace std;

// long overheads
// fib(5)
// fib(4) + fib(3)
// fib(3) + fib(2) + fib (2) + fib (1)
// so calculating fib(2) two times, so long overheads

// fibonacci
int fib(int n){
    if(n <= 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

// factorial
int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    // Factorial of a number:
    // 5! = 5*4*3*2*1 = 120
    // 0! = 1
    // 1! = 1
    // n! = n * (n-1)!

    int a;
    cout<< "Enter a number"<<endl;
    cin >> a;

    // factorial 
    // cout << "The factorial of " << a << " is " << factorial(a) << endl;

    // fabonacci
    // 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
    cout<<"The term in fabonacci sequence at position "<<a<< " is " <<fib(a);
    return 0;
}