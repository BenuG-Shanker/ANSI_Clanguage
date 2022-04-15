// ambiguity resolution in inheritance
#include<iostream>

using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<<"How are you?"<<endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<<"Kaise ho?"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    int a;
    // solution for amibiguity removal
    public:
        void greet()
        {
            Base1 :: greet();
        }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    Derived d;
    d.greet(); // ambiguity created
    return 0;
}