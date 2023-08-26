#include <iostream>
using namespace std;

class person
{
private:
    int age;

public:
    void setage(int iage)
    {
        age = iage;
    }
    void showage()
    {
        cout << this->age << endl;
    }
};
int main()
{
    person annie;
    annie.setage(18);
    annie.showage();

    return 0;
}