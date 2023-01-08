#include<iostream>
using namespace std;

// float funcAverage(int a, int b){ // int,int
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){ // int,float
//     float avg = (a+b)/2.0;
//     return avg;
// }

// rather than writing separate functions for different data types, define Template

template<class T1, class T2> // specify data types later in objects
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

// swap
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(5, 2.4);
    printf("The average of these numbers is %f", a); // %f = float
    cout<< endl;
    printf("The average of these numbers is %.3f", a); // float till 3 decimal points

    //swap
    float x = 4.7, y = 5.2;
    cout<<endl<<"Before swapping: "<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    swapp(x, y);
    cout<<endl<<"After swapping: "<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;


    
    return 0;
}