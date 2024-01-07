#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 22, 33, 44};
    cout << "First element: " << *arr << endl;
    cout << "Second element: " << *(arr + 1) << endl;
    cout << "Third element: " << *(arr + 2) << endl;
    cout << "Fourth element: " << *(arr + 3) << endl;
    return 0;
}