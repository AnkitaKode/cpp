#include <iostream>
using namespace std;
struct student
{
    int rollno;
    char sex;
    int age;
};
void display(student a);
void show(student *a);

int main()
{
    student anki = {12, 'f', 18};
    display(anki);
    cout << endl;
    show(&anki);
    display(anki);
    return 0;
}

void display(student a)
{
    cout << a.rollno << endl;
    cout << a.sex << endl;
    cout << a.age << endl;
    a.rollno = 00;
}

void show(student *a)
{
    cout << a->rollno << endl;
    cout << a->sex << endl;
    cout << a->age << endl;
    a->rollno = 000;
}