#include<iostream>

using namespace std;

//the entities of the structure is the combination of items or variables of different data types
//always written globally
struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee benu;
    struct employee gopal;
    struct employee shanker;
    benu.eId = 1;
    benu.favChar = 'c';
    benu.salary = 120000000;

    cout<<"The value is "<<benu.eId<<endl;
    cout<<"The value is "<<benu.favChar<<endl;
    cout<<"The value is "<<benu.salary<<endl;
    return 0;
}