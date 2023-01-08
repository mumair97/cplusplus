#include<iostream>
#include<fstream>
#include<string> // getline ()

/*
The useful class for working with files in cpp are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in Cpp, you will have to open the file. 
// Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function of the class, open()


using namespace std;

int main()
{
    string st = "Hello, World!";

    // Opening file using Constructor and writing it
    // ofstream out("60_sample.txt"); // write operation
    // out << st;

    // Opening file using member function
    ifstream in;
    in.open("60_sample.txt"); // read operation // can written like write operation
    // in >> st;// reads only one word
    getline(in, st); // reads the whole line
    cout << st << endl;


    return 0;
}