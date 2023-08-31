#include <iostream>
using namespace std;

class marks
{
    int subjects[3];

public:
    marks(int sub1, int sub2, int sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }
    int operator[](int position)
    {
        return subjects[position];
    }
};
int main()
{
    marks annie(11, 22, 33);
    cout << annie[0] << endl;
    cout << annie[1] << endl;
    cout << annie[2] << endl;
    return 0;
}