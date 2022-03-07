#include<iostream>

using namespace std;

// function overloading

//calculate the valume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

//calculate the volume of a cylinder
int volume(int a)
{
    return (a * a * a);
}

int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout<<"The volume of cuboid 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 anf height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;
    return 0;
}