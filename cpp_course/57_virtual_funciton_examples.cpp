#include<iostream>
#include<cstring> // copy string
using namespace std;

class CWU{ // code with Umair
    protected:
        string title;
        float rating;
    public:
        CWU(string s, float r){  // base class constructor
            title = s; 
            rating = r;
        }
        virtual void display(){ //virtual, if not there, affects the der. display func. when using pointer.
            cout << "Title: " << title << endl;
            cout << "Rating: " << rating << endl;
        }
};

class CWUVideo: public CWU{ // inheritance
    float videoLength; //vl
    public:
        CWUVideo(string s, float r, float vl): CWU(s, r){ // constructors in derived class; send s, r to base class constructor
            videoLength = vl;
        }
        void display(){ // to use derived class display function, we use Virtual Base class
            CWU::display(); // display of base class
            cout << "Video Length: " << videoLength << endl; // plus add this
        }
};

class CWUText: public CWU{
    int words; //wc
    public:
        CWUText(string s, float r, int wc): CWU(s, r){
            words = wc;
        }
        void display(){ // to use derived class display function, we use Virtual Base class
            CWU::display(); // display of base class
            cout << "Words: " << words << endl; // plus add this
        }
};

int main()
{
    CWUVideo v1("C++", 4.5, 45.5); // title, rating, videolength
    CWUText t1("Python", 4.8, 1000); // title, rating, wordlength
    // v1.display();
    // t1.display();

    CWU *tut[2]; // two pointers
    tut[0] = &v1;
    tut[1] = &t1;

    tut[0]->display();
    tut[1]->display();

    
    return 0;
}

/* Rules for Virtual Functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
6. Constructors are never virtual
7. A virtual function in C++ cannot be a static function
8. A virtual function in C++ cannot be a friend function of another class
9. If a class contains a virtual function, then the destructor of this class should also be virtual
10. A virtual function in C++ is used to achieve Runtime Polymorphism

*/