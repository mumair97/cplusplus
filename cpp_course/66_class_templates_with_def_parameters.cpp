#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char> // default parameters
class Umair{
    public:
    T1 a;
    T2 b;
    T3 c;

    Umair(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }

    void display(){
        cout<<"The value of a is "<<this->a<<endl
            <<"The value of b is "<<this->b<<endl
            <<"The value of c is "<<this->c<<endl;
    }
};


int main()
{
    Umair<> obj(4, 5.5, 'a'); // default parameters values, so no need to specify here again
    obj.display();

    cout<<endl;

    Umair<float, char, char> obj1(1.7, 'a', 'b'); // diff. parameters values, need to specify here
    obj1.display();



    
    return 0;
}