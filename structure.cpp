#include <iostream>
using namespace std;
struct student
{
  int id;
  char favChar;
  float salary;

} ankita, satyam;
int main()
{
  struct student ankita, satyam;

  ankita.id = 1;
  ankita.favChar = 'a';
  ankita.salary = 100090;
  satyam.id = 2;
  satyam.favChar = 's';
  satyam.salary = 100;
  cout << ankita.salary << endl;
  cout << ankita.id << endl;
  cout << "The value is " << ankita.favChar << endl;
  cout << satyam.salary << endl;
  return 0;
}