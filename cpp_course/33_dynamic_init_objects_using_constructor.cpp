#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

    // 3 constructors
    BankDeposit(){}; // blank constructor, if not there, compilor will be confused in 2nd and 3rd constructor...
    //for which one to call, so the 1st one helps to initially run the constructor.
    BankDeposit(int p, int y, float r); // r can be 0.05
    BankDeposit(int p, int y, int r);   // r can be 5
    // method
    void show(void);
};

BankDeposit::BankDeposit(int p, int y, float r){ // float constructor
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
};

BankDeposit::BankDeposit(int p, int y, int r){ // int constructor
    principal = p;
    years = y;
    interestRate = float(r)/100; // convert r to float
    returnValue = principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
};

void BankDeposit::show(void){
    cout<<"Principal amount was "<<principal<<endl
        <<"Return value after "<<years<<" years is "<<returnValue<<endl;
};


int main()
{
    BankDeposit bd1, bd2, bd3; // for this you need blank constructor above
    int p, y;
    float r;    //decimal interest Rate = 0.05
    int R;      // percentage interest Rate = 5

    cout<<"Enter the value of p, y, r"<<endl;
    cin>>p>>y>>r;
    // BankDeposit bd1 = BankDeposit(p, y, r); // run this way, without blank constructor
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y, R"<<endl;
    cin>>p>>y>>R;
    // BankDeposit bd2 = BankDeposit(p, y, R); // run this way, without blank constructor
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    // bd3 = BankDeposit(100,1,3); // works as well
    // bd3.show();

    return 0;
}