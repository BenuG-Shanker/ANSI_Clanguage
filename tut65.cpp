#include<iostream>

using namespace std;

//This will swap a and b
//Return by reference using reference variables
int & swapReferenceVar(int &a, int &b)
{                    // temp a   b
    int temp = a;    // 4    4   5
    a = b;           // 4    5   5   
    b = temp;        // 4    5   4
    return a;
}

int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    swapReferenceVar(x, y) = 766;
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    return 0;
}