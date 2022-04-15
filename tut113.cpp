#include<iostream>

using namespace std;

class B
{
    public:
        void say()
        {
            cout<<"Hello World !"<<endl;
        }
};

class D : public B
{
    public:
    // D's new say() method will override base class's say() method  
        void say()
        {
            cout<<"Hello my beautiful people !"<<endl;
        }
};
// derive class will over right the same inherited function, which resolves the ambiguity.
// when base class have the function and derived class is not having the same function then the function of base class will get used.
// when base class have the function and derived class is having the same function then the function of derived class will get used and it will over right the function in the base class one.
int main()
{
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}