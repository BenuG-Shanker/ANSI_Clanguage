#include<iostream> 

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;
// not using bank deposit as a empty constructor then overwriting it as requirred in the next statement
    public:
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = p;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = p;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }    
}

void BankDeposit :: show()
{
    cout<<endl<<"Principal amount was "<<principal
        <<" Return value after "<<years
        <<" years is "<<returnValue<<endl;
}

int main()
{
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y and r "<<endl;
    cin>>p>>y>>r;
    BankDeposit bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y and R "<<endl;
    cin>>p>>y>>R;
    BankDeposit bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}