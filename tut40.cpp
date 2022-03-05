#include<iostream>

using namespace std;

int main()
{
    for(int i  = 0; i < 40; i++)
    {
        if(i == 2)
        {
            continue;
        }//loop will jumps off to the current iteration whose output value comes to be 2   

        cout<<i<<endl;
    }

    return 0;
}