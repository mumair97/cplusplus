#include<iostream>
using namespace std;

int main()
{
    // break and continue
    for (int i = 0; i < 10; i++)
    {
        if(i==3){
            cout<<"The value of i is 3"<<endl;
            break;
        }
        cout<<i<<endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if(i==3){
            cout<<"The value of i is 3"<<endl;
            continue;
        }
        cout<<i<<endl;
    }



    return 0;
}