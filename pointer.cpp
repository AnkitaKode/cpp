#include<iostream>
using namespace std;
int main(){

  //POINTER:is a data type which holds the address of other data types
  int a = 3;
  int*b = &a;
  int age =30;
  int *ageptr;
  //&--->(Address of) operator
  cout<<"the address of a is "<<&a<<endl;
  cout<<"the address of a is "<<b<<endl;
  //*-->(value at) Deference Operator
  cout<<"The value at address b is "<<*b<<endl;
  //Pointer to Pointer:
  int**c=&b;
  cout<<"the address of b is "<<&b<<endl;
  cout<<"the address of b is "<<c<<endl;
  cout<<"the value at address c is "<<*c<<endl;
  cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;
  cout<<age<<" is "<<ageptr<<endl;
  cout<<age<<" is "<<*ageptr;
   return 0;
}
