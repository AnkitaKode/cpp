#include <iostream>

using namespace std;

class marks
{
    int mark;

public:
    marks()
    {
        mark = 0;
    }
    marks(int m)
    {
        mark = m;
    }
    void yourmark()
    {
        cout << "your mark is " << mark << endl;
    }
    void operator+=(int bonusmark)
    {
        mark = mark + bonusmark;
    }
    friend void operator-=(marks &curobj, int redmark);
};

void operator-=(marks &curobj, int redmark)
{
    curobj.mark -= redmark;
}

int main()
{

    marks ankitamark(40);
    ankitamark.yourmark();

    int x = 20;

    ankitamark += x;
    ankitamark.yourmark();

    ankitamark -= x;
    ankitamark.yourmark();

    return 0;
}