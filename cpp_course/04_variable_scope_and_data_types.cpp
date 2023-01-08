#include<iostream> // header file for input/output // Comment
using namespace std;

int main()
{
    // int sum = 6;
    // cout << "Hello, World! " << sum <<endl;

    // Variable Scope
    int a = 4, b = 6, c = 8; // global variables
    {
        int a = 45; // local variables
        b = 9; // global variable updated, that is why we get updated value
        int d = 34;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    cout << a << " " << b << " " << c << endl; // b value updated

    // Data Types
    int x = 34;
    float y = 34.4;
    double z = 34.4; // float but long after decimal
    char ch = 'd';
    bool is_true = false; //true=1, false=0
    cout<< is_true<< endl; //0

    cout <<"\nsize of int is "<< sizeof(x) <<" bytes"<< endl;
    cout <<"size of float is "<< sizeof(y) <<" bytes"<< endl;
    cout <<"size of double is "<< sizeof(z) <<" bytes"<< endl;
    cout <<"size of char is "<< sizeof(ch) <<" bytes"<< endl;
    cout <<"size of bol is "<< sizeof(is_true)<<" bytes"<< endl;


    return 0;
}