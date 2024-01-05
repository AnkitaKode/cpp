#include <iostream>
using namespace std;
void show(int[], int);
int main()
{
   int numbers[] = {24, 76, 70, 80, 25};
   int length = 5;
   show(numbers, length);
   return 0;
}
void show(int numbers[], int length)
{
   for (int i = 0; i < length; i++)
   {
      cout << numbers[i]<<" ";
   }
}