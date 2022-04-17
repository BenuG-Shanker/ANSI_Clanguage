#include<iostream>

using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display()
        {
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display()
        {
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }

};

int main()
{
    BaseClass * base_class_pointer;//used to point the object of a class
    BaseClass obj_base;
    DerivedClass obj_derived;
    //late binding - display the function of base class since base class pointer is euqal to derived class object
    base_class_pointer = &obj_derived;//Pointing base class to derived class
    base_class_pointer->var_base = 34;
    // base class pointer will not be able to access the properties of derived class
    // base_class_pointer->var_derived = 134; --> gives error 
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9844;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}