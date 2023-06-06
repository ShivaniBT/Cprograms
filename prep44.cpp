#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void Display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void Display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is: " << videoLength << " minutes " << endl;
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
    void Display()
    {
        cout << "this is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars." << endl;
        cout << "No of words in this tutorial is: " << words << " words " << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWHVideo
    title = "c++ tutorial";
    vlen = 4.56;
    rating = 4.06;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.Display();

    // for CWHText
    title = "C++ tutorial Text";
    words = 433;
    rating = 4.16;
    CWHText djText(title, rating, words);
    djText.Display();
    cout<<"\n";

    CWH *tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;
    tuts[0]->Display();
    cout<<"\n";
    tuts[1]->Display();
    return 0;
}

// rules for virtual functions
// 1. They cannot be static.
// 2.They are accessed by object pointers.
// 3.Virtual functions can be a friend of another class.
// 4.a virtual function in base class might not be used.
// 5.If a virtual function is defined in base class,there is no necessity of redefining it in the derived class.