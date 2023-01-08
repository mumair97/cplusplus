#include<iostream>
using namespace std;

class Point{
    int x, y;

    public:
    Point(int a, int b){ // parametrized constructor
        x = a;
        y = b;
    }
    Point(int a){ // parametrized constructor
        x = a;
        y = 0;
    }
    Point(){ // default constructor
        x = 0;
        y = 0;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }

    void displayPoint(){

        // cout << "The point is (" << this->x << ", " << this->y<<")"<<endl;
        // cout << "The point is (" << (*this).x << ", " << (*this).y<<")"<<endl;
        // cout << "The point is (" << this->getX() << ", " << this->getY()<<")"<<endl;
        // cout << "The point is (" << (*this).getX() << ", " << (*this).getY()<<")"<<endl;
        // cout << "The point is (" << getX() << ", " << getY()<<")"<<endl;

        cout << "The point is (" << x << ", " << y<<")"<<endl;

    }
};

// create a function (Hint: Make it a friend function) which takes 2 point objects
//  and computes the distance between those 2 points

// use these examples to check your code
// (1, 1) and (1, 1) should give 0
// (0, 0) and (1, 1) should give sqrt(2)
// (0, 0) and (3, 4) should give 5
// (10, 15) and (10, 30) should give 15


int main()
{
    Point p1(10, 15); // Normal way of initializing objects
    p1.displayPoint();
    // cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

    Point p2(10); // This also calls constructor as the first parameter is int
    p2.displayPoint();
    // cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY();

    Point p3; // This also calls constructor as the first parameter is int
    p3.displayPoint();
    // cout << "p3.x = " << p3.getX() << ", p3.y = " << p3.getY();


    return 0;
}