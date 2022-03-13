#include <iostream>

using namespace std;

    class Complex
    {
        int a, b;

    public:
        Complex(void); // constructor declaration
        void printNumber()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
    };

Complex :: Complex(void)
{
    a = 0;
    b = 0;
}

int main()
{
    // Classes are build as a custum data types
    // Creating a Constructor -
    // which is a special member function with same name as of the class
    // It is automatically invoked (or called) whenever an object is created.
    // It is used to initialize the objects of its class

    Complex c;

    c.printNumber();

    return 0;
}