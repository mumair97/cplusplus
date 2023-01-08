#include<iostream>
using namespace std;

int main()
{
    // for loop
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
    }

    // while loop
    int i = 0;
    while (i < 5)
    {
        cout<<i<<endl;
        i++;
    }

    // do-while loop
    int j = 0;
    do
    {
        cout<<j<<endl;
        j++;
    } while (j < 5); // if while is wrong in first run, do will run one time


    return 0;
}