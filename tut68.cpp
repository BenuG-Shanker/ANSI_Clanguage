#include<iostream>

using namespace std;

inline int product(int a, int b)
{
    return a * b;
}
//Inline function: compiler will replace the function call by the actual function code using Inline funciton..
//Also, used to reduce the overhead cost of the whole program.
//Also, it is a request to a compiler from user for using Inline functions.
float moneyReceived(int currentMoney, float factor = 1.04)
{//default arguments should be written(extreme right position) after the compulsory arguments as a formal parameters.
    return currentMoney * factor;
}

int main() 
{
    int a, b;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP : If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year";
    return 0;
}