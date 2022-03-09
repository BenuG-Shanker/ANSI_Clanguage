#include <iostream>

using namespace std;
// Class as an Array
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    Employee benu, gopal, mani, kartik;
    benu.setId();
    benu.getId();

    Employee fb[4];

    for (int i = 1; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();        
    }

    return 0;
}