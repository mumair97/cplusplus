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
        virtual void display() = 0; // when equals 0 == pure virtual function, so we must define it derived class again
        // { 
        //     cout << "Title: " << title << endl;
        //     cout << "Rating: " << rating << endl;
        // }
};

class CWUVideo: public CWU{ // inheritance
    float videoLength; //vl
    public:
        CWUVideo(string s, float r, float vl): CWU(s, r){ // constructors in derived class; send s, r to base class constructor
            videoLength = vl;
        }
        void display(){ // must be there becoz, we use PURE Virtual Base class
            // CWU::display(); // display of base class
            cout << "Title: " << title << endl;
            cout << "Rating: " << rating << endl;
            cout << "Video Length: " << videoLength << endl;
        }
};

class CWUText: public CWU{ // inheritance
    int words; //wc
    public:
        CWUText(string s, float r, int wc): CWU(s, r){
            words = wc;
        }
        void display(){ // to use derived class display function, we use Virtual Base class
            // CWU::display(); // display of base class
            cout << "Title: " << title << endl;
            cout << "Rating: " << rating << endl;
            cout << "Words: " << words << endl; 
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

/* Abstract Base class

1. A class which has at least one pure virtual function is called an abstract base class.
2. We cannot create objects of abstract base class. (becoz we have to use derived objects)
3. If we inherit an abstract base class, we must either provide definition to all the pure virtual functions in derived class or make derived class also abstract.
4. Abstract base class is used to achieve abstraction in C++.
5. Abstract base class is also known as Interface class.
6. Abstract base class is used to achieve 100% abstraction.

=== Pure Virtual Function ===

1. A function which is declared as virtual and has no definition is called a pure virtual function.
2. A pure virtual function is declared by assigning 0 to it.


*/