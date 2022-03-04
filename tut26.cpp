#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a = 34;
    cout<<"The value of a was :"<<a;
    a = 45;
    cout<<"The value of a is :"<<a;
    
    // Constants in c++
    // constants will permanently fix the value given to any varriable and due to this compiler will show the error if the same varriable is introduced with different value within the same source code.
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    //a = 45; // you will get error because a is a constant
    //cout<<"The value of a is: "<<a<endl;

    return 0;
}