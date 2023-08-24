#include <iostream>
using namespace std;

// :: is scope resolution operator

class Human
{
public:
    string name;
    void introduce();
};
void Human ::introduce()
{
    cout << Human::name << endl;
}
int main()
{

    Human anki;
    anki.name = "anki";
    anki.introduce();

    return 0;
}