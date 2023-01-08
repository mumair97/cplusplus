#include<iostream>
using namespace std;

/*

Case1:
class B: public A{
    order of execution of constructor --> First A(), then B()
}

Case2:
class A: public B, public C{
    order of execution of constructor --> First B(), then C(), then A()
}

Case3:
class A: public B, virtual public C{
    order of execution of constructor --> First C(), then B(), then A() 
}

*/

class Base1{
    int data1;
    public:
        // int data2;
        Base1(int i){
            data1 = i;
            // data2 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void getData1(void){
            // return data1;
            cout<<"The value of data1 is "<<data1<<endl;
        }
        // int getData2(){
        //     return data2;
        // }
};

class Base2{
    int data2;
    public:
        // int data2;
        Base2(int i){
            data2 = i;
            // data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void getData2(void){
            // return data1;
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived: public Base2, public Base1{ // order makes difference
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){ // order doesn't make difference
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printData(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived umair(1, 2, 3, 4);
    
    umair.getData1();
    umair.getData2();
    umair.printData();

    return 0;
}