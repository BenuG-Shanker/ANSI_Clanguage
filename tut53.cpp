#include<iostream>

using namespace std;

//used to provide the maximum memorygiven to all the items combined though c++.
//always written globally
union money
{
    //from all items we can use only any one item in union because the memory is being sharred by using union in c++
    int rice;
    char car;
    float pounds;
};


int main()
{
    union money m1;
    m1.rice = 34; 
    cout<<m1.rice;

    return 0;
}