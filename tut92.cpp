#include <iostream>

using namespace std;

class Complex
{ 
    int a, b;

public:
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // This is a Default Constructor as it accepts no parameters
{
    a = 0;
    b = 0;
    cout << "Hello World !"; // gets printed because it is in constructor
}

int main()
{
    // Classes are build as a custum data types
    // Creating a Constructor -
    // which is a special member function with same name as of the class
    // It is automatically invoked (or called) whenever an object is created.
    // It is used to initialize the objects of its class

    Complex c1, c2, c3;

    c1.printNumber(); // gets printed
    c2.printNumber(); // gets printed
    c3.printNumber(); // gets printed

    // Return type for a Constructor is not important
    // So if we change the name of the constructor by adding some letter then compiler will provide a warning which only shows the validity of above statement.
    return 0;
}

// Constructor which do not accept any parameters are calles as Default Constructor

// Characteristics of constructor
/*

1. It should be declare in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They can not return values and do not have return types.
4. It can have default arguments.
5. We can not refer to their address.

*/