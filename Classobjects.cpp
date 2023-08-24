#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void introduce()
    {
        cout << "Hi" << name << endl;
    }
};

int main()
{
    Human ankita;
    Human *satyam = new Human();

    ankita.name = " ankita";
    ankita.introduce();

    satyam->name = " satyam";
    satyam->introduce();

    return 0;
}