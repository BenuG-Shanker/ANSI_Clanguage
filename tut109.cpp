#include <iostream>

using namespace std;
// Syntax for inheriting in multiple inheritance
// class DerivedC : visibility-mode base1, visibility-mode base2
// {
//     class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Derived : public Base1, public Base2
{
    public:
    void show()
    {
        cout<<"The value of Base 1 is "<<base1int<<endl;
        cout<<"The value of Base 2 is "<<base2int<<endl;
        cout<<"The sum of these value is "<<base1int + base2int<<endl;
    }
};
// The inherited derived class will look something like this:
// Data members:
//     base1int ---> protected
//     base2int ---> protected
// Member functions:
//     set_base1int() ---> public
//     set_base2int() ---> public
//     set_show() ---> public
int main()
{
    Derived Benu;
    Benu.set_base1int(25);
    Benu.set_base2int(5);
    Benu.show();
    return 0;
}