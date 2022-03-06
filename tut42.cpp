#include<iostream>

using namespace std;

int main()
{
    int a = 3;
    int* b;
    b = &a;

    // Pointer to pointeer
    int** c = &b;
    // c ia pointer to pointer variable of niteger data type, which is storing the address of variable b of integer data type and address of address of variable a of integer data type
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}