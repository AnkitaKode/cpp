#include <iostream>
using namespace std;

class animal
{
public:
    animal()
    {
        cout << "animal constructor\n";
    }
    int age;
    void walk()
    {
        cout << "animal that walks" << endl;
    }
};

class tiger : virtual public animal
{
public:
    tiger()
    {
        cout << "it is tiger\n";
    }
};

class lion : virtual public animal
{
public:
    lion()
    {
        cout << "it is lion\n";
    }
};

class liger : public tiger, public lion
{
public:
    liger()
    {
        cout << "it is liger\n";
    }
};

int main()
{
    liger annie;
    annie.walk();

    return 0;
}