#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human()
    {
        name = "ankita";
        age = 0;
        cout << "Constructor is called when u creates an objects of human " << endl;
    }
    void display()
    {
        cout << name << endl
             << age << endl;
    }
};
int main()
{
    Human anki;
    anki.display();
    return 0;
}