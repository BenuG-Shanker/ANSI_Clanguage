#include<iostream>
using namespace std;
/* precedence of local variable is more
than that of global variable. */

int glo = 6; // global variable

void sum()
{
// variable in a fuction is a local variable.
    int a; 
    cout<<glo;
}

int main()
{
    int glo = 9; // local variable
    glo = 78;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'u';
    sum();
    cout<<glo;
    // cout<<"This is tutorial 11. \nHere the value of a and b is "<<a<<b;
    // cout<<"\nThe value of pi is "<<pi;
    // cout<<"\nThe character to be printed is "<<c;
    return 0;
}