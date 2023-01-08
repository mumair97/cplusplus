#include<iostream>
using namespace std;


class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(void){counter = 0;}//;  // either write ; or not. // init counter from 0
        void setPrice(void);
        void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"Enter Id of your item no "<<counter+1<<endl; // counter+1 = to start the item/counter from 1.
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop store;
    store.initCounter(); // set counter to 0
    store.setPrice(); // you can call setPrice in loop to run many times
    store.setPrice();
    store.setPrice();
    store.displayPrice();


    return 0;
}