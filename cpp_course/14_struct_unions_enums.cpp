#include<iostream>
using namespace std;

// struct stores diff data types unlike arrays
// no access modifiers, so can be accessed from everywhere

typedef struct employee  // name struct employee as ep // you may not write typedef, still works
{
    /* data */ // in total uses 9 bytes
    int eId; // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 bytes
} emp;

//union = like struct but beter memory management
union money
{
    /* data */ // in total uses 4 bytes, and only one use it a time
    int rice; 
    char car;
    float pounds;
};

int main()
{
    // enum for program readablity
    enum Meal{ breakfast, lunch, dinner}; // stores 0,1,2 ...
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<(m1==1)<<endl; //true = 1
    cout<<(m1==2)<<endl; //false = 0

    // cout<< breakfast<<endl;
    // cout<< lunch<<endl;
    // cout<< dinner<<endl;


    // union
    // union money m1; // use one value at a time, otherwise you'l get garbage value, becoz memory is shared
    // m1.rice = 30;
    // cout << "The value is " << m1.rice << endl;
    // m1.pounds = 34.4;
    // cout << "The value is " << m1.pounds << endl;
    // m1.car = 'c';
    // cout << "The value is " << m1.car << endl;


    // struct employee umair;
    // emp umair;  // emp is alias of struct employee
    // struct employee muhammad;
    // struct employee haris;
  
    // umair.eId = 1;
    // umair.favChar = 'u';
    // umair.salary = 120000;
  
    // cout << "The value is " << umair.eId << endl;
    // cout << "The value is " << umair.favChar << endl;
    // cout << "The value is " << umair.salary << endl;

    // union
    return 0;
}