#include<iostream>

using namespace std;

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline functions
    static int c = 0;//This executes only once
    c = c + 1;//Next time this functionis run, the value of c will be retained.
    return a * b + c;
}
//Inline function: compiler will replace the function call by the actual function code using Inline funciton..
//Also, used to reduce the overhead cost of the whole program.
int main() 
{
    int a, b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;

    return 0;
}