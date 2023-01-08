/* Vectors:
1. it is like arrays but arrays are of fixed sized and vectors are flexible.
2. vectors are dynamic arrays.
3. vectors are implemented using templates.
4. vectors are implemented using dynamic arrays.
5. vectors are implemented using linked lists.
6. vectors could be of int, float, char etc...


*/

#include<iostream>
#include<vector> // header for vectors
using namespace std;

void display(vector<int> &vec){ // pass by reference // &vec is a reference of vector
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
        cout<<vec.at(i)<< " "; // element at ith index
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1; // vector of int type (vectors could be of int, float, char etc...)
    int element, size;

    cout<<"Enter size of vector: ";
    cin>>size;


    // input
    for(int i=0; i<size; i++){
        cout<<"Enter element to add to this vector: "<<i+1<<": ";
        cin>>element;
        vec1.push_back(element); // push_back() is a member function of vector ==> push/append values
    }

    // vec1.pop_back(); // pop_back() is a member function of vector ==> pops last value

    // output
    display(vec1);

    //insert an element at some position
    vector<int> :: iterator iter = vec1.begin(); // begin() is a member function of vector
    // vec1.insert(iter, 566); // insert 566 at the begining/first position
    // vec1.insert(iter+1, 99); // insert 99 after first element
    // vec1.insert(iter+1,5, 99);    // insert 5 copies

    //at
    // cout<<vec1.at(i)<<endl; // element at ith index
    // cout<<vec1.at(2)<<endl; // at() is a member function of vector // element at 2 index




    display(vec1);


    
    return 0;
}

/* Vectors:
1. it is like arrays but arrays are of fixed sized and vectors are flexible.
2. vectors are dynamic arrays.
3. vectors are implemented using templates.
4. vectors are implemented using dynamic arrays.
5. vectors are implemented using linked lists.

Syntax:
vector<int> vec1; // vector of int type
vec1.push_back(1); // push_back() is a member function of vector
vec1.push_back(2);
vec1.push_back(3);
vec1.push_back(4);
vec1.push_back(5);

vec1.pop_back(); // pop_back() is a member function of vector

vec1.size(); // size() is a member function of vector

vec1.capacity(); // capacity() is a member function of vector

vec1.resize(10); // resize() is a member function of vector

vec1.empty(); // empty() is a member function of vector

vec1.clear(); // clear() is a member function of vector

vec1.begin(); // begin() is a member function of vector

vec1.end(); // end() is a member function of vector

vec1.insert(vec1.begin()+3, 100); // insert() is a member function of vector


*/