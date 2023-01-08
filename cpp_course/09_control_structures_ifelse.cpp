#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    //  if-else
    if((age>0) && (age<18))
    {
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
    else
    {
        cout<<"You can come to my party"<<endl;
    }

    // switch-case
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;

    default: //
        cout<<"No special case"<<endl;
        break;
    }

    cout<<"Done with switch case";

    return 0;
}