#include<iostream>

using namespace std;

// function overloading
int add(int a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a + b;
}

int add(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a + b + c;
}

int main()
{
    cout<<"The sum of 3 and 6 is "<<add(3, 6)/* function prototype will be matched by the compiler */<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<add(3, 7, 6)/* function prototype will be matched by the compiler */<<endl;
    return 0;
}