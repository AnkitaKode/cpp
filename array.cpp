#include <iostream>
using namespace std;
int main()
{
   // Array Example
   int marks[] = {23, 46, 78, 94};

   int mathsmarks[4];
   mathsmarks[0] = 224;
   mathsmarks[1] = 254;
   mathsmarks[2] = 324;
   mathsmarks[3] = 924;
   // we can  change value before printing
   // same with while and do while
   mathsmarks[3] = 900;
   cout << "These are maths marks" << endl;
   cout << mathsmarks[0] << endl;
   cout << mathsmarks[1] << endl;
   cout << mathsmarks[2] << endl;
   cout << mathsmarks[3] << endl;
   // OR
   for (int i = 0; i < 4; i++)
   {
      cout << "The value of marks " << i << "is" << marks[i] << endl;
   }

   return 0;
}
// #include <iostream>
// using namespace std;
// void show(int[], int);
// int main()
// {
//   int numbers[] = {24, 76, 70, 80, 25};
//   int length = 5;

//   show(numbers, length);
//   return 0;
// }

// void show(int numbers[], int length)
// {
//   for (int i = 0; i < length; i++)
//   {
//     cout << numbers[i];
//   }
// }