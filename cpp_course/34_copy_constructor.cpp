#include<iostream>
using namespace std;


class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }

    // when no copy constructor found, compiler provides its default copy constructor to all classes
    // so if you comment out the copy constructor below, code will still run with same output.
    Number(Number &obj){ // copy constructor
        cout<<"Copy constructor called!"<<endl;
        a = obj.a;
    }
    void display(void){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{
    Number x, y, z, w(45), u = w; // copy constructor not called for all of them becoz objects made here.
    x.display();
    y.display();
    z.display();
    w.display();
    u.display(); // copy constructor not called, becoz object "u" was already made up above.

    Number v(w); // copy constructor called, because object "v" is made and assigned here.
    v.display();

    Number z2 = w; // copy constructor called, because object is made and assigned here.
    z2.display();

    

    return 0;
}