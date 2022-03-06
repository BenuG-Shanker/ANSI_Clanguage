#include<iostream>

using namespace std;

int main()
{
    //pointers and arrays

    int marks[4] = {23, 45, 56, 89};
    
    cout<<"These are marks"<<endl;

    int* p = marks;
    // arithmetic pointers
    cout<<*(p++)<<endl;
    cout<<*(++p);
    return 0;
}