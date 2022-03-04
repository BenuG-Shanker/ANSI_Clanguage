#include<iostream>
using namespace std;

int main()
{
    //**************Tyep Casting****************
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<(int)b<<endl;
    cout<<"The value of a is "<<int(b)<<endl;
    int c = int(b);

    cout<<"the expression is "<<a + b<<endl;
    cout<<"the expression is "<<a + int(b)<<endl;
    cout<<"the expression is "<<a + (int)b<<endl;
    return 0;
}
