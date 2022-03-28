#include <iostream>

using namespace std;
// Constructor Overloading

class Complex
{
    int a, b;

public:
    Complex()
    {//having no argument
        a = 0;
        b = 0;
    }
    Complex(int x, int y)//constructor 1
    {//having only two argument
        a = x;
        b = y;
    }

    Complex(int x)//constructor 2
    {//having only one argument
        a = x;
        b = 0;
    }
// class having a multiple constructor and only that particular 
// constructor will run whose sets are matched by the arguments 
// in the main function by assigning the private data values
//  to the values given in the main funcion
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 6);// two argument is requirred
    c1.printNumber();

    Complex c2(5);// one argument is requirred
    c2.printNumber();

    Complex c3;// no argument is requirred
    c3.printNumber();
    
    return 0;
}