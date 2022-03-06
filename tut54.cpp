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
    m1.car = 'c';
    cout<<m1.rice<<endl; /* prints the garbage value as we have used two items in union.
                    so, one previous item needs to be not used by the union even though it is called to give output_iterator_tag
                    that's why current item in union money is used to use, which value is entertained by union 
                    */                     
    cout<<m1.car;
    return 0;
}