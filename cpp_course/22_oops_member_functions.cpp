#include<iostream>
#include<string>
using namespace std;

// nesting of member functions

class binary{
    string s;  // s is private member by default
    // void chk_bin(void); // only be accessed by member functions from public(can't be accessed from main())

    public:
        void read(void);  // we use these public functions to access string s.
        void chk_bin(void); // member functions
        void ones_compliment(void);
        void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
}

void binary::chk_bin(void){
    for(int i=0; i<s.length(); i++){  // s.length
        if(s.at(i)!='0' && s.at(i)!='1'){ // s.at(i)
            cout<<"Incorrect binary format!"<<endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void){

    chk_bin(); // or in main function with b.chk_bin(); // can access if private

    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary::display(void){
    cout<<"Displaying your binary number: ";
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{

    binary b; // b = object
    b.read();
    // b.chk_bin(); // or in ones_complement function without b.; // can't access if private
    
    b.display();

    b.ones_compliment();
    b.display();


    return 0;
}