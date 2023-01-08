#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b)
        {
            id = a;
            price = b;
        }
        void getData()
        {
            cout << "The id of this item is " << id << endl;
            cout << "The price of this item is " << price << endl;
        }
};

/*
    1   2   3
    ^       ^
    |       |
    ptr2    ptr

*/


int main()
{
    int size = 3;
    // Array of objects
    // Shop *ptr1 = new Shop[4];
    // ptr1->setData(1, 54);
    // ptr1->getData();

    Shop *ptr = new Shop [size];
    Shop *ptr2 = ptr;

    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptr2->getData(); // ptr2 becoz the ptr is already on 3rd item
        ptr2++;
    }

    // for (i = 0; i < size; i++)
    // {
    //     cout << "Enter id and price of item " << i + 1 << endl;
    //     cin >> p >> q;
    //     ptr->setData(p, q); // or ptr2 here and below
    //     ptr->getData();
    //     ptr++;
    // }

    // Array of objects using pointers
    // int size = 3;
    // Shop *ptr1 = new Shop[size]; 
    // Shop *ptr2 = ptr1;
    // for (int i = 0; i < size; i++)
    // {
    //     // ptr1->setData(i+1, 100*i);
    //     // ptr1->getData();
    //     // ptr1++;
    //     ptr2->setData(i+1, 100*i);
    //     ptr2->getData();
    //     ptr2++;
    // }

    return 0;
}