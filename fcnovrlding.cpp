#include <iostream>
using namespace std;

int volumeC(double r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int b, int l, int h)
{
    return (b * l * h);
}

int main()
{
    cout << "The volume of cylinder of 2,3 is " << volumeC(2, 3) << endl;
    cout << "The volume of cuboid of 3,7,2 is " << volume(3, 7, 2) << endl;
    cout << "The volume of cube of side 5 is " << volume(5, 5, 5) << endl;

    return 0;
}