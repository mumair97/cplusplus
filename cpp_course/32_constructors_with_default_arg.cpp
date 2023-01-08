#include<iostream>
using namespace std;


class Simple{
    int data1;
    int data2;

    public:

    // constructor with one default argument b=9
    Simple(int a, int b = 9){
        data1 = a;
        data2 = b;
    }
    void printData(){
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
    }
};


int main()
{
    Simple s1(1, 4); // this b=4 value will replace the default value 9
    s1.printData();

    Simple s2(5); // for b, default value 9
    s2.printData();


    return 0;
}