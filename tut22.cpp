#include<iostream>
using namespace std;

int main()
{
    //**************Reference Variables****************
    // rohandas ---> monty ---->rohu ----> dangerous coder
    float x = 455; 
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}