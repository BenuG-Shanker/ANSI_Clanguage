#include<iostream>

using namespace std;

class Number 
{
    int a;
    public:
        Number(){
            a = 0;// 0 is a good contructor
        }//defaut constructor
        Number(int num)
        {
            a = num;
        }
        Number(Number &obj)
        {
            cout<<"copy constructor called!!!"<<endl;
            a = obj.a;
        }
        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y
    Number z1(x);// copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called because only assignment operator is used
    z2.display();

    
    Number z3 = z; // copy constructor invoked
    z3.display();

    return 0;
}
// copy constructor is a constructor which is used to make a copy of other object.