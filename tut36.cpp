#include<iostream>

using namespace std;

int main()
{
    /*do-While loop in C++*/
    //Syntax
    /*
    do
    {
        C++ Statements;
    }While(Condition);
    */
   
   int i = 1;
   //loop will run or perform exactly one iteration no matter what the condition is either true or false.
   do
   {
    cout<<i<<endl;
    i++;
   } while (i <= 40);
   
   return 0;
}