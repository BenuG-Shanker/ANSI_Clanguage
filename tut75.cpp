#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')//string is not 1 and 0 then string is not binary
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}

int main()
{
    // OOPs - Classes and Objects

    // C++ --> Initially called --> C with classes by stroustrup
    // class --> extensioin of structures (in C)
    // structures had limitations --> members are public
    //   --> No methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private and few as public
    // structure in C++ are typedefed
    // you can declare objects along with the class declaration
    /* class Employee
    {
        //class definition

    } benu, gopal, shanker*/
    // benu.salary = 8 makes no sense if salary is private

    // Nesting of Member Function

    binary b;
    b.read();
    b.chk_bin();

    return 0;
}