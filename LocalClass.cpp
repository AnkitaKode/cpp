#include <iostream>
#include <string>
using namespace std;

void studentlist();

int main()
{
    studentlist();
    return 0;
}

void studentlist()
{

    class student
    {

    public:
        string name;
        int age;

        void display()
        {
            cout << name << endl
                 << age << endl;
        }
    };

    student annie;
    annie.name = "annie";
    annie.age = 18;
    annie.display();
}