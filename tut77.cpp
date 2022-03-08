#include <iostream>
#include <string>

using namespace std;

class binary
{
    // it is not neccessary to write private keyword in the class while programming, because by default all the members of the class are private.
    string s;// here, variable s is the private member of the class binary

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void); 
};

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')//string is not 1 and 0 then string is not binary
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}

void binary :: ones_complement(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
     chk_bin();//here no object is requirred and this function performs an automatic task which is hidden from the user knowledge
    cout<<"Displaying your binary number"<<endl;
    for (int  i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{   // Nesting of Member Function

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}