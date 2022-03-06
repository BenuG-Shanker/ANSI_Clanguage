#include<iostream>

using namespace std;

int main()
{
    //always written inside main function.  
    //also used for maintaining the readability of the program.  
    enum Meal{ breakfast, lunch, dinner };
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;
    cout<<(m1 == 0)<<endl;//1 refers to True
    cout<<(m1 == 1)<<endl;//0 refers to False
    cout<<(m2 == 1)<<endl;//1 refers to True
    cout<<(m2 == 2)<<endl;//0 refers to False
    cout<<(m3 == 2)<<endl;//1 refers to True
    cout<<(m3 == 3)<<endl;//0 refers to False
    return 0;
}