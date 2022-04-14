#include<iostream>

using namespace std;

class Base
{
    protected:
// it is as like as private but public
    int a;
    private:
    int b;
};
/*
For a protected member:
                            Public Derivation       Private Derivation        Protected Derivation
    1. Private Members    Not Inherited          Not Inherited             Not Inherited
    2. Protected Members  Protected              Private                   Protected
    3. Public Members     Public                 Private                   Protected
*/
class Derived : Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a;// will not work since a is protected in bothbase as well as derived class  
    return 0;
}