#include<iostream>
using namespace std;

/*
template<class T1, class T2, ...>   // two or more parameters
class nameOfClass{
    body
}
*/
template<class T1, class T2> // specify data types later in objects 
class myClass{
    public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }

    void display(){
        cout<<this->data1<<endl<<this->data2;
    }

};

int main()
{
    myClass<int, char> obj(4, 'd'); // "d" = does not work 
    obj.display();

    
    return 0;
}