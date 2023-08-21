#include <iostream>
using namespace std;
int main()
{
  int a = 100, b = 20;
  // There are two types of Header files .

  // 1.System Header files: It comes with compiler.
  // 2.User Defined  Header files: It is written by the Programmer .
  // We can use end1 for new line.
  cout << "Operator in cpp is :" << endl;
  cout << "Following are the name of operators " << endl;
  // Arithmetic Operators
  cout << "The value of a+b is:" << a + b << endl;
  cout << "The value of a-b is:" << a - b << endl;
  cout << "The value of a*b is:" << a * b << endl;
  cout << "The value of a/b is:" << a / b << endl;
  cout << "The value of a%b is:" << a % b << endl;
  cout << "The value of a++ is:" << a++ << endl;
  cout << "The value of a-- is:" << a-- << endl;
  cout << "The value of ++a is:" << ++a << endl;
  cout << "The value of --a is:" << --a << endl;
  // Assignment Operators -->Used to assign value to variables.
  // int a=3, b=4;
  // char d ='d'
  cout << endl;

  // Comparison Operators
  cout << "The value of a==b is:" << (a == b) << endl;

  cout << "The value of a==b is:" << (!(a == b)) << endl;
  // a==b means a=b and a<b

  cout << "The value of a>b is:" << (a > b) << endl;
  cout << "The value of a<b is:" << (a < b) << endl;
  cout << "The value of a!=b is:" << (a != b) << endl;
  cout << "The value of a<=b is:" << (a <= b) << endl;
  cout << "The value of a>=b is:" << (a >= b) << endl;

  return 0;
}