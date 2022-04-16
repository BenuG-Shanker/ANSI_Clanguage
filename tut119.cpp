#include<iostream>

using namespace std;
// *(ptr)-->dereference ptr
int main()
{
    // basic example
    int a = 4;
    int* ptr = &a;
    *ptr = 999;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new keyword (or operator)
    int *p = new int(40);
    float *q = new float(40.78);
    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value at address q is "<<*(q)<<endl;

    // to allocate the block of memory
    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete arr; // free dynamically allocated variable.
    // delete[] arr; // free dynamically allocated block of memory.
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete keyword (or operator)
    
    return 0;
}