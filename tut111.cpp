/*
create 2 classes:
    1. SimpleCalculator - Take input of 2 number using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Take input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using ?
    Q2. Which mode of inheritance are you using ?
    Q3. create an object of HybridCalcuator and display results of simple and Sciencetific Calculator.
    Q4. How is code reusability implemented.
*/
#include<iostream>
#include<cmath>

using namespace std;

class Simple_calc
{
    protected:
    int num1;
    int num2;
    public:
        void setData1(int n1, int n2);
        int getadd();
        int getsub();
        int getmul();
        int getdiv();
};
void Simple_calc :: setData1(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
}
int Simple_calc :: getadd()
{
    return num1 + num2;
}
int Simple_calc :: getsub()
{
    return num1 - num2;
}
int Simple_calc :: getmul()
{
    return num1 * num2;
}
int Simple_calc :: getdiv()
{
    return num1 / num2;
}

class Scientific_calc
{
    protected:
    int data1;
    int data2;
    public:
        void setData2(int x1, int x2);
        int getper();
        int getpow();
};
void Scientific_calc :: setData2(int x1, int x2)
{
    data1 = x1;
    data2 = x2;
}
int Scientific_calc :: getper()
{
    return ( ( data1 + data2 ) / 2 );
}
int Scientific_calc :: getpow()
{
    return (pow(data1,data2));
}

class Hybrid_Calculator : public Simple_calc, public Scientific_calc
{
    public:
        void show()
        {
            cout<<"The first number used in simple calculator is "<<num1<<endl;
            cout<<"The second number used in simple calculator is "<<num2<<endl;
            cout<<"The Addition result is "<<getadd()<<endl;
            cout<<"The Substraction result is "<<getsub()<<endl;
            cout<<"The Multiplication result is "<<getmul()<<endl;
            cout<<"The Divsion result is "<<getdiv()<<endl;
            cout<<"The first number used in scientific calculator is "<<data1<<endl;
            cout<<"The second number used in scientific calculator is "<<data2<<endl;
            cout<<"The Average result is "<<getper()<<endl;
            cout<<"The Power Multiplication result is "<<getpow()<<endl;
        }
};

int main()
{
    Hybrid_Calculator xuv;
    xuv.setData1(5, 3);
    xuv.getadd();
    xuv.getsub();
    xuv.getmul();
    xuv.getdiv();
    xuv.show();
    xuv.setData2(2, 5);
    xuv.getper();
    xuv.getpow();
    xuv.show();
    return 0;
}