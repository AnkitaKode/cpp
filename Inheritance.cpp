#include <iostream>
#include <string>

// Inheritance supports Reusability
// Existing class is called Base class
// New class which is inherited is called Derived class
using namespace std;
class Person
{
public:
    string name;
    int age;
    void setName(string iname) { name = iname; }

    void setage(int iage) { age = iage; }
};
class Student : public Person
{
public:
    int id;
    void SetId(int iid) { id = iid; }

    void introduce()
    {
        cout << "Hi I am " << name << "  and i am " << age << " years old " << endl
             << " and my student Id is " << id << endl;
    }
};

int main()
{
    Student anki;
    anki.setName("anki");
    anki.setage(18);
    anki.SetId(12);

    anki.introduce();
    return 0;
}