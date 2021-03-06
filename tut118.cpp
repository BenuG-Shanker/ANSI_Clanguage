#include<iostream>

using namespace std;
// Initialisation List and Initialisation Section

/*
Syntax for Initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test
{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};
*/
class Test
{
// initilization section is a way of giving the value to the data member
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(2*j)
        // Test(int i, int j) : a(i), b(a+j)
        // Test(int i, int j) : b(j), a(i+b) ---> Garbage Value because a will be initialized first
        // Test(int i, int j) : a(i) --> can be written inside the constructor body
        Test(int i, int j)
        {
            a = i;
            b = j;
            cout<<"constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main()
{
    Test t(4, 6);
    return 0;
}