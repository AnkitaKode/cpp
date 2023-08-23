#include <iostream>
using namespace std;
struct address
{
    int house_no;
    string street_name;
};

struct student
{
    string name;
    int rollno;
    address addr;
};
int main()
{
    student anki;
    anki.name = "anki";
    anki.rollno = 11;

    anki.addr.house_no = 13;
    anki.addr.street_name = "boring road";

    cout << anki.name << endl;
    cout << anki.rollno << endl;

    cout << anki.addr.house_no << endl;
    cout << anki.addr.street_name << endl;
    return 0;
}