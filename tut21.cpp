#include<iostream>
using namespace std;

int main()
{
    // *************float, double and long double Literals****************
    float d = 34.4f; // works same with replacing 'f' with 'F'
    long double e = 34.4l; // works same with replacing 'l' with 'L'
    cout<<"The size of 34.4 "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    return 0;
}
