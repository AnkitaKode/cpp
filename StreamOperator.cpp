#include <iostream>
#include <string>

using namespace std;

class person
{
    string name;
    int age;

public:
    person()
    {
        name = "noname";
        age = 0;
    }
    friend ostream &operator<<(ostream &output, person &p);

    friend istream &operator>>(istream &imtput, person &p);
};

ostream &operator<<(ostream &output, person &p)
{
    output << "what the hack" << endl;
    cout << "my name is " << p.name << " and my age is " << p.age << endl;
    return output;
}

istream &operator>>(istream &input, person &p)
{
    input >> p.name >> p.age;
    return input;
}

int main()
{

    cout << "Enter the name and age " << endl;
    person anki;

    cin >> anki;
    cout << anki;

    return 0;
}