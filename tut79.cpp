#include<iostream>

using namespace std;

class Employee
{
    int id;
    static int count;
// static variable is called as class variable
// only single copy is made and maintained 
// scope --> inside the class
// lifetime --> until when the program gets terminated 
    public:
        void setData(void)
        {
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void)  
        {
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }
};

int Employee :: count; // default value is 0
//has to be declare outside because the memory of this static variable, memory will come as a common memory of the class
// And, static variable is by default intialized to zero
int main()
{
    Employee benu;
    // benu.id = 1;
    // benu.count = 1// can not do this as id and count are private.
    benu.setData();
    benu.getData();
    return 0;
}