#include<iostream>
#include<fstream>
#include<string> // getline ()

using namespace std;


int main()
{
    //. // connecting our file with hout stream
    // ofstream hout("60_sample.txt");

    // // taking input from the user
    // cout<< "Enter your name: ";
    // string name;
    // cin>>name;

    // // writing the string/name in the file
    // hout<<"My name is " + name;

    // // closing the file
    // hout.close(); // link closed, so cannot access directly

    // reading the file
    ifstream hin("60_sample.txt"); // you can work with other file as well
    string content;
    // hin>>content; // prints/reads only one word
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    
    hin.close();

    
    return 0;
}