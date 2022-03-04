#include<iostream>

using namespace std;

int main()
{
    // Selection Control Structure: Switch Case Statement without working of break statement  
  
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        
    case 22:
        cout<<"You are 22"<<endl;
        
    case 2:
        cout<<"You are 2"<<endl;
        

    default:
        cout<<"No special cases"<<endl;
        
    }

    //cout<<"Done with switch case";

    return 0;
}
