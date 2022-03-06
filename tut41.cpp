#include<iostream>

using namespace std;

int main()
{
    // what is pointer --> data type (or the type variable) which holds the address of other data type

    int a = 3;
    int* b = &a;/*This line can be break as:
                    int* b;
                    b = &a;*/
    // b is a pointer variable of integere data type which is storing the address of variable a.
    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    
    // * --->(value at) Dereference Operator
    cout<<"The value at address b is "<<*b<<endl;
    return 0;
}