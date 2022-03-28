#include<iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a, int b = 9, int c = 8)
        {// constructor with defaulta arguments
        // here, b and c are default arguments because when user will not provide any value to them then they can print their pre feeded value as output.
            data1 = a;
            data2 = b;
            data3 = c;
        }
        
        void printData();
};

void Simple :: printData()
{
    cout<<"The value of data is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main()
{
    Simple s(1, 4);
    s.printData();

    Simple t(3);
    t.printData();

    Simple u(1, 9, 45);
    u.printData();
    return 0;
}