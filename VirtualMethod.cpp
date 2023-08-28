#include <iostream>
using namespace std;

class person
{
public:
    virtual void introduce() = 0;
    // pure virtual function is defined as = 0;
};

void person::introduce()
{
    cout << "hey from person " << endl;
}

class student : public person
{
public:
    void introduce()
    {
        cout << "hi i am a student " << endl;
        person::introduce();
    }
};

int main()
{
    student annie;
    annie.introduce();

    return 0;
}