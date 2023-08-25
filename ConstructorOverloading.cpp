#include <iostream>
using namespace std;
class Area
{
private:
    int length;
    int breadth;

public:
    // Constructor without argument
    Area() : length(5), breadth(2)
    {
    }
    // Constructor with two argument
    Area(int l, int b) : length(l), breadth(b)
    {
    }
    void GetLength()
    {
        cout << "Enter length and breadth : ";
        cin >> length >> breadth;
    }
    int AreaCalculation()
    {
        return (length * breadth);
    }
    void DisplayArea(int temp)
    {
        cout << "Area is : " << temp << endl;
    }
};
int main()
{
    Area objarea1, objarea2(24, 2);
    int temp;
    objarea1.GetLength();
    cout << "Area when default constructor is called." << endl;
    temp = objarea1.AreaCalculation();
    objarea1.DisplayArea(temp);
    cout << "Area when (parameterized constructor is called." << endl;
    temp = objarea2.AreaCalculation();
    objarea2.DisplayArea(temp);
    return 0;
}
