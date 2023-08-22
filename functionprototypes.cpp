#include <iostream>
using namespace std;
// FUNCTION PROTOTYPES
// type function name[arguments]
//  int sum(int a,  b)--->Not acceptable
//  int sum(int,int)---->Acceptable
//  int sum(int a, int b) --->Acceptable

int sum(int a, int b);
void g(void);

// numm1 and num2 are ACTUAL parameter
// a and b are FORMAL parameters will be taking values from ACTUAL parameters

int main()
{
   int num1, num2;
   cout << "Enter first number" << endl;
   cin >> num1;
   cout << "Enter second number" << endl;
   cin >> num2;
   cout << "The sum is " << sum(num1, num2);
   g();
   return 0;
}
int sum(int a, int b)
{
   int c = a + b;
   return c;
}
void g()
{
   cout << "\nHello";
}