#include<iostream>

using namespace std;

int main()
{
    //always written inside main function.
    //also used for maintaining the readability of the program.  
    enum Meal{ breakfast, lunch, dinner };
    Meal m1 = breakfast;
    cout<<m1<<endl;
    Meal m2 = lunch;
    cout<<m2<<endl;
    Meal m3 = dinner;
    cout<<m3<<endl;
    return 0;
}