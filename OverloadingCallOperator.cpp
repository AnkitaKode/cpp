#include <iostream>

using namespace std;

class marks
{
    int mark;

public:
    marks(int m)
    {
        cout << "constructor is called" << endl;
        mark = m;
    }

    void yourmark()
    {
        cout << "hey i got " << mark << " mars" << endl;
    }

    marks operator()(int mk)
    {
        mark = mk;
        cout << " operator is called" << endl;
        return *this;
    }
};

int main()
{
    marks anniemark(11);
    anniemark.yourmark();

    anniemark(33);
    anniemark.yourmark();
    return 0;
}