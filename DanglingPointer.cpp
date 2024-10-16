#include <iostream>
using namespace std;
int main()
{

   int *pointer = nullptr;
   pointer = new int;
   if (pointer != nullptr)
   {
      *pointer = 20;
      cout << "pointer" << endl;
      delete pointer;
      pointer = nullptr;
   }

   else
   {
      cout << "memory not allocated.";
   }

   return 0;
}