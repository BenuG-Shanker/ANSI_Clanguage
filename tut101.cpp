#include<iostream>

using namespace std;
// Destructor is used free up the dynamic memory which was allocated by the object in its constructor.
// it do not takes an argument nor does it return any value.
// it is implicitly run by a compiler.
int count = 0;//count is a global variable.

class Num
{
    public:
        Num()
        {
            count++;
            cout<<"This is the time when constructor is called for object number."<<count<<endl;

        }
        ~Num()
        {
            cout<<"This is the time when my destructor is called for object number."<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;

//block is formed
// scope of the element inside the block is within the block itself.
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2, n3;
        cout<<"Exiting this block"<<endl;
    }// after this block n2 and n3 will distruct.
    cout<<"Back to main"<<endl;
    return 0;
}// after this main n2 and n3 will distruct.