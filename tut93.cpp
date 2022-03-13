#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // This is a parameterized constructor
    void printNumber()
    {
        cout << "Your number is " << a << " + " <<b<< "i" << endl;
    }
};

Complex :: Complex(int x, int y) // This is a parameterized constructor as it takes two parameters.
{
    a = x;
    b = y;
    cout<<"Hello World!";
}

int main()
{
    // Destructor is opposite of Constructor - destructor will used to destruct the object by the freeing the memory allocated to it.
    //  Constructor --> Default Constructor and Parameterissed __cpp_delegating_constructors


//Implicit call
    Complex a(4, 6);     
    a.printNumber();

//Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}