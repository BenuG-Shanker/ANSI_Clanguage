//can also be abl;e to work in this way also !!

#include<iostream>

using namespace std;

class Number 
{
    int a;
    public:
        Number(){
            a = 0;// 
        }
        Number(int num)
        {
            a = num;
        }
// When no copy constructor is found, compiler suppliesits own copy constructor to each and every class
        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display(); 
    Number z1(x);// compiler invokes copy constructor
    z1.display();
    Number z2(y);// compiler invokes copy constructor
    z2.display();
    Number z3(z);// compiler invokes copy constructor
    z3.display();
    return 0;
}