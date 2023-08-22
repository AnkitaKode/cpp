#include <iostream>
using namespace std;
void g(const int *start, const int *end);
int main()
{
    int numbers[] = {22, 55, 86, 24, 64, 46, 86};
    g(numbers + 3, numbers + 7);
    return 0;
}
void g(const int *start, const int *end)
{
    const int *ptr;
    for (ptr = start; ptr != end; ptr++)
    {
        cout << *ptr << endl;
    }
}