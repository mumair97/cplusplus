#include<iostream>
using namespace std;

int main()
{

    int a = 4; // it will allocate the memory in the stack form
    int *ptr = &a; // p is a pointer to an integer
    // or
    // *ptr = 999;

    cout << "The value of a is " << *(ptr) << endl;

    // new Keyword
    int *p = new int(40); // p is a pointer to an integer/float //  it will allocate the memory in heap
    cout << "The value of p is " << *(p) << endl;

    int *arr = new int[3]; // block of memory //  it will allocate the memory in heap 
    arr[0] = 10;
    // *(arr+1) = 20;
    arr[1] = 20;
    arr[2] = 30;

    // delete Keyword/operator
    // delete p; // delete memory space
    // delete[] arr; // delete the block of memery/ or dynamically allocated memory

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}