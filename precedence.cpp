#include<iostream>
using namespace std;
int main ()
{
//operators precendence
int a =3, b=4;
//int c = ((a*5)+b);
//bracket: cpp reference
int c = ((((a*5)+b)-45)+89);
cout<<c;
return 0;
}
