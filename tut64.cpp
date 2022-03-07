#include<iostream>

using namespace std;

//This will swap a and b
//Call by reference using reference variables
void swapReferenceVar(int &a, int &b)
{                    // temp a   b
    int temp = a;    // 4    4   5
    a = b;           // 4    5   5   
    b = temp;        // 4    5   4
}

int main()
{
    int a = 4, b = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapReferenceVar(a, b);
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}