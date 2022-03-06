#include<iostream>

using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    
    cout<<"These are marks"<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of matks "<<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
}