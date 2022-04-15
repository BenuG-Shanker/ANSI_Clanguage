/*
                                        virtual base class

                        class A(a instance)
                            |
                ------------------------------
                |                             |
            class B(a instance)             class C(a instance)
                |                             |
                -------------------------------
                            |
                        class D(a instance from class B)(a instance from class C)

having the two same instnce of an object from two different base classes creates an ambiguity regarding instances.
Solution of the ambiguity : Define the classes B and C as derived from A as virtual base class
Syntax of virtual base class :
class B : virtual public A{
    ----------
};
class C : virtual public A{
    ----------
};
virtual base class saves from ambiguity and duplication.
*/
/*
Inheritances: 
student --> Test [done]
student --> Sports [done]
Test --> Result [done]
Sports --> Result [done]

*/
#include<iostream>

using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_number(int a)      
        {
            roll_no = a;
        }
        void print_number(void)
        {
            cout<<"Your Roll number is "<<roll_no<<endl;
        }
};

class Test : virtual public Student // virtual public or public virtual can be run in any alignment
{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }
        void print_marks(void)
        {
            cout<<"Your result is here: "<<endl
                <<"Maths :"<<maths<<endl
                <<"Physics :"<<physics<<endl;
        }
};

class Spots : virtual public Student // virtual public or public virtual can be run in any alignment
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score(void)
        {
            cout<<"your PT score is :"<<score<<endl;
        }
};

class Result : public Test, public Spots
{
    private:
        float total;
    public:
        void display(void)
        {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"your total score is :"<<total<<endl;
        }
};

int main()
{
    Result Benu;
    Benu.set_number(4200);
    Benu.set_marks(78.9, 99.5);
    Benu.set_score(9);
    Benu.display();
    return 0;
}