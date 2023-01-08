#include<iostream>
using namespace std;

template <class T>
class Umair{
    public:
        T data;
        Umair(T a){
            data = a;
        }
        void display(); // only for template, becoz its defined outside
        // void display(){ // you can take this out for template
        //     cout<<this->data<<endl;
        // }
};

template <class T>
void Umair<T> :: display(){ // you must define it class 
    cout<<this->data<<endl;
}

// overloading
void func(int a){
    cout<<"You called func with int argument "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"You called template func() "<<a<<endl;
}

int main()
{
    // Umair<float> obj(5.7);
    // cout<<obj.data<<endl;
    // obj.display();

    // overloading
    func(4); // exact match takes the highest priority
    func(4.5);
    func('a');
    func("Umair");

    
    return 0;
}