#include<iostream>
using namespace std;

/* Templates in cpp:
1. templates are used to create generic classes and functions.
2. templates are used to create a class or function that can work with any data type.
3. templates are used to create a class or function that can work with any data type, without
    repeating the same code for different data types.
--------------------------
1. Templates tells the class that use our custom data type T for now, and we will tell you 
    the exact data types later, which we have done in main().
2. we can use templates for functions, classes, objects, arrays, pointers, structures, unions, enums,
    typedef, unions as well.
3. we can use templates for any data type, like int, float, char, double, etc.

*/


template <class T> // replace all data types (int) with T variable
class vector{
    public:
    T *arr;
    int size;

    public:
        vector(int m){ //constructor
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main()
{
    // all values are Tegers; float will give error 
    // vector v1(3); // array of objects
    // v1.arr[0] = 4;
    // v1.arr[1] = 5;
    // v1.arr[2] = 6;

    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 2;
    // v2.arr[2] = 3;

    // cout<<v1.dotProduct(v2);

    // if float, then use templates
    vector<float> v1(3); // array of objects with data type (float) to be used --> templates
    v1.arr[0] = 4.4;
    v1.arr[1] = 5.5;
    v1.arr[2] = 6.6;

    vector<float> v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 2.2;
    v2.arr[2] = 3.3;

    cout<<v1.dotProduct(v2);

    
    return 0;
}