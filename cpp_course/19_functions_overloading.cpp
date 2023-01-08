#include<iostream>
using namespace std;

int sum(int a, int b){ // try with float, it works
    cout<<"using function with 2 arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a + b + c;
}

// calculate volume of a cylinder
int volume(int r, int h){
    return 3.14 * r * r * h; // pi * r^2 * h
}

// calculate volume of a cube
int volume(int a){
    return a * a * a; // a^3
}

// calculate volume of a cuboid
int volume(int l, int b, int h){
    return l * b * h;
}


int main()
{
    cout << "The sum of 3 and 4 is " << sum(3, 4) << endl;
    cout << "The sum of 3, 4 and 5 is " << sum(3, 4, 5) << endl;

    cout << "The volume of a cylinder with radius 3 and height 4 is " << volume(3, 4) << endl;
    cout << "The volume of a cube with side 3 is " << volume(3) << endl;
    cout << "The volume of a cuboid with length 3, breadth 4 and height 5 is " << volume(3, 4, 5) << endl;


    return 0;
}