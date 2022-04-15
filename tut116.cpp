#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }
        void perforOperationsSimple()
        {
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator
{
    int a, b;
    public:
    void getDataScientific()
        {
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }
        void perforOperationsScientific()
        {
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};
// multiple inheritance
// public SimpleCalculator, public ScientificCalculator
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main()
{
    // SimpleCalculator calc;
    // ScientificCalculator calc;
    // calc.getData();
    // calc.perforOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.perforOperationsScientific();
    calc.getDataSimple();
    calc.perforOperationsSimple();
    return 0;
}