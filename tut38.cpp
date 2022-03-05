#include<iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if(i==2)
        {
            break;
        }//loop will exit after printing the value of i upto 2 only.
    }
    
    return 0;
}