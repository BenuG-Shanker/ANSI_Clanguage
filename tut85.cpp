#include <iostream>

using namespace std;
// Friend Functions
// 1 + 4i
// 5 + 8i

// 6 + 12i
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non member - sumComplex function is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2);
    //is permission given to function from a class for using its private variables
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*
Prooperties of Friend Functions
1. Not in the scope of class
2. since it is not in the scope of the class, it can not be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declarred inside public and private sections of the class
6. It can not access the members directly by their names and need object_name.member_name to access any member.
*/