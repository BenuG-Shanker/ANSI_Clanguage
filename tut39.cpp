#include<iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        if(i==2)
        {
            break;
        }//loop will exit after printing the value of i as equal to 1, but not 2 and after 2.
        
        cout<<i<<endl;
    }
    
    return 0;
}