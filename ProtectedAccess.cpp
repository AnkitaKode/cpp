#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;

public:
    void setName(string iname)
    {
        name = iname;
    }
};
class student : public Person
{
public:
    void display()
    {
        cout << name << endl;
    }
};
int main()
{
    student ankita;
    ankita.setName("ankita");
    ankita.display();
    return 0;
}