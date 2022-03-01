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
    bool is_true = true;
    sum();
    cout<<glo<< is_true;
    return 0;
}