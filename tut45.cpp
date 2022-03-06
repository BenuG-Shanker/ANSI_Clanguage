#include<iostream>

using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;

    //You can change the value of an array
    marks[2] = 455;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;
}