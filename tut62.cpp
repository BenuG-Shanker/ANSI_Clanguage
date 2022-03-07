#include<iostream>

using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

//This will not swap a and b
void swap(int a, int b)
{                   // temp a   b
    int temp = a;   // 4    4   5
    a = b;          // 4    5   5   
    b = temp;       // 4    5   4
}//After execution this funciton will destroy before which they can not be able to perform their task

int main()
{
    int a = 4, b = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
// the value of a and b will not be able to get swaped because,
// the value of actual argument in main function gets copied to formal argument of a swap function

    return 0;
}