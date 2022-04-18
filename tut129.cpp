// // Abstract base class and pure virtual function
// Abtract base class and pure virtual function are inter related to each other
// Abstract Base Class : use to have atleast one Pure Virtual Function
// that class which is needed to derived to other classes and new virtual function can be added is called abstract base class
// pure virtual function is requirred only to creat the abstract base class
#include<iostream>
#include<cstring>

using namespace std;

class CWH
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s , float r)
        {
            title = s;
            rating = r;
        }  
        virtual void display() = 0; // do-nothing function -> pure virtual function
};

class CWHVideo : public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vL) : CWH(s, r)
        {
            videoLength = vL;
        }
        void display()
        {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText : public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r)
        {
            words = wc;
        }
        void display()
        {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWH video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();

    // for CWH text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djtext(title, rating, words);
    djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
//  separate display of both the classes will be call from main due to virtual keyword only
    tuts[0]->display();
    tuts[1]->display();


    return 0;
}

/*
Rules for virtual functions:
1. they cannot be static.
2. they are accessed by objcet pointers.
3. virtual functions can be a friend of another class.
4. a virtual function in base class can might not be used.
5. if a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/