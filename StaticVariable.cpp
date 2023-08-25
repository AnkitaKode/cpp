#include <iostream>
using namespace std;

class Human
{

public:
    static int Human_count;

    Human()
    {
        Human_count++;
    }
    void HumanTotal()
    {
        cout << "There are " << Human_count << " people are in this program " << endl;
    }
};
int Human::Human_count = 0;

int main()
{
    cout << Human::Human_count << endl;
    Human ankita;
    Human anki;
    Human satyam;
    Human anil;
    ankita.HumanTotal();
    cout << Human::Human_count << endl;
    return 0;
}