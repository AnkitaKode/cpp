#include <iostream>
#define ANKI 1

using namespace std;
int main()
{

#ifdef ANKI
   cout << "hey reader";
   cout << endl;
#endif // ANKI

#undef ANKI
#ifdef ANKI
   cout << "hey";
#else
   cout << "How are u?";
#endif // ANKI

   return 0;
}