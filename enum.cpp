#include <iostream>
using namespace std;
int main()
{

  enum meal
  {
    breakfast,
    lunch,
    dinner
  };
  meal m1 = breakfast;
  cout << breakfast;
  //  cout<<lunch;
  cout << dinner;
  cout << lunch;

  return 0;
}