#include<iostream>

using namespace std;

int fib(int n)
{
    if( n < 2 )
    {
        return 1;
    }
    return fib( n - 2 ) + fib( n - 1 );
}

int main()
{
    // Fibonacci Sequence
    // 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ......

    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The term in finonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}