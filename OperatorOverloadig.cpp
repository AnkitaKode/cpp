#include <iostream>
using namespace std;
class marks
{
    int intmark;
    int extmark;

public:
    marks()
    {
        intmark = 0;
        extmark = 0;
    }
    marks(int im, int em)
    {
        intmark = im;
        extmark = em;
    }
    void display()
    {
        cout << intmark << endl;
        cout << extmark << endl;
    }
    marks operator+(marks m)
    {
        marks temp;
        temp.intmark = intmark + m.intmark;
        temp.extmark = extmark + m.extmark;
        return temp;
    }
};
int main()
{

    marks m1(10, 20), m2(28, 58);
    marks m3 = m1 + m2;
    m3.display();
    return 0;
}