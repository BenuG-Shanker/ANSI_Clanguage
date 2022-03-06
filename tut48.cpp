#include<iostream>

using namespace std;

int main()
{
    
    int marks[4] = {23, 45, 56, 89};
    
    cout<<"These are marks"<<endl;

    int i = 0;

    do
    {
        cout<<"The value of matks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i < 4);
    
    return 0;
}