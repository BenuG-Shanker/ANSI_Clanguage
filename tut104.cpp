#include<iostream>

using namespace std;

// base class
class Employee
{
    // int id;

    // float salary;

    public:
    int id;
        float salary;
        Employee(int inpId)
        {
            id = inpId;
            salary = 34;
        }
        Employee(){}
};

/* derived class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base class-name}}
{
    class members/methods/etc...
}
here, visibility mode referes to two types of modes like: Public and Private, and it is for inheritance
A class can be inherited publically and privately while performing inheritance concept:
-> If a class is inherited publically, then the public members of the base class will become the public members of the derived class.
-> If a class is inherited privately, then the public members of the base class will become the private members of the derived class.
*//*
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited.
5. Public members can be able to get inherited, and the way to inherit the public members are called as Visibility mode.
*/

// Creating a Programmer class derived from Employee Base class 
class Programmer : public Employee
{
    public:
    Programmer(int inpId)
    {//by not making the default Ecmployee constructor in Employee class. Here, this inherited class can not be able to call "id" which is a member in Employee class.
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee Benu(1), Gopal(2);
    cout<<Benu.salary<<endl;
    cout<<Gopal.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
// no error will be thrown by the compiler because id is the public member of the base class and it will also be a public member of a derived class
    skillF.getData();
    return 0;
}   