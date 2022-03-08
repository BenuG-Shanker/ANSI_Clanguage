//Object Oriented Programming

#include<iostream>

using namespace std;

class Employee
{
    private://only functions can access the given variables
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);// Declaration
            //within class function can also be able to get implemented.
        void getData()// Used for only printing
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1) // :: --> scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee benu;
    // variables a, b, c can not be accessed because they are private variables and they are only accessed by the functions only.(publicly access)
    // variables d and e can be able to get accessed publicly by anyone.(directly access)

    // benu.a = 134; // This will throw error as a is private variable.

    benu.d = 34; /* for giving the value to the variable d */
    benu.e = 89; /* for giving the value to the variable e */
    benu.setData(1, 2, 3);
    benu.getData();
    return 0;
}