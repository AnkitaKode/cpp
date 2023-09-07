#include <iostream>
#include <string>

using namespace std;

class person
{
public:
    string *name;
    int age;

    person(string name, int age)
    {
        this->name = new string(name);
        this->age = age;
    }

    person(const person &p)
    {
        cout << "copy constructor is called : " << endl;
        name = new string(*p.name);
        age = p.age;
    }

    void changenameandage(string name, int age)
    {
        *(this->name) = name;
        this->age = age;
    }

    void introduce()
    {
        cout << "hey i am " << *name << " and i am " << age << " years old" << endl;
    }
};

int main()
{
    person ankita("ankita", 18);
    ankita.introduce();

    person duplicateankita = ankita;
    duplicateankita.introduce();

    ankita.changenameandage("ankita k", 180);
    ankita.introduce();

    duplicateankita.introduce();

    return 0;
}