#include <iostream>
using namespace std;

void g(int *ptr);

int main()
{
  int age = 20;
  g(&age);
  cout << age << endl;
  return 0;
}

void g(int *ptr)
{
  cout << *ptr << endl;
  *ptr = 100;
}