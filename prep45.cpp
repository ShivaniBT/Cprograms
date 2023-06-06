#include <iostream>
#include <cstring>
using namespace std;

// Abstract base class and pure virtual function
// Abstract base class should atleast have one pure virtual function used only for inheritance or design purpose.

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
    virtual void Display()=0;   //do-nothing function--->pure virtual function.
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