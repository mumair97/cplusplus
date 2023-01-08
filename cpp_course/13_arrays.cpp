#include<iostream>
using namespace std;

int main(){

    // Array Example
    int marks[] = {23, 45, 56, 89}; //store same data type 
    int mathMarks[4];
    
    mathMarks[0] = 343;
    mathMarks[1] = 454;
    mathMarks[2] = 565;
    mathMarks[3] = 674;

    cout<<"these are math Marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // you can change value of an array
    marks[2] = 999;

    cout<<"these are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // you can use for loop
    for (size_t i = 0; i < 4; i++)
    {
        /* code */
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // // you can also use while loop
    // int i = 0;
    // while (i<4)
    // {
    //     /* code */
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // // you can also use do while loop
    // int j = 0;
    // do
    // {
    //     /* code */
    //     cout<<"the value of marks "<<j<<" is "<<marks[j]<<endl;
    //     j++;
    // } while (j<4);
    
    // Pointer and arrays
    int *p = marks;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

    // increment p
    cout<<*(p++)<<endl; // first print p then increment the index
    cout<<*p<<endl; // prints the incremented index
    cout<<*(++p)<<endl; // first increment the index then print p

    return 0;

}