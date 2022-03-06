#include<iostream>

using namespace std;

//Function Prototype
//type function-name(arguments);  
int sum(int, int);//--> Acceptable
void g(void);//-->Acceptable
// void g();//-->Acceptable

int main()//from main function whole program is executed.
{
    int num1, num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    //return value function key "sum(num1, num2)"
    cout<<"The sum is "<<sum(num1, num2);//Actual Parameters: are values which are passed to a funciton
    g();
    return 0;
}// num1 and num2 are actual parameters

int sum(int a, int b)//Formal Parameters: which are formed within the function
{
    int c = a + b;
    return c;
}// a and b are formal parameter, which are taking values from actual parameters
// formal and actual parameters names can be same, but confussion within names may occur
void g()
{
    cout<<"\nHello, Good Morning";
}//There is no need for a function to always return a value.