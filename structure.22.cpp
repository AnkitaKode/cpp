#include<iostream>
using namespace std;
struct employee 
{
  /* data */
  int id;
  char favChar;
  float salary;
};
int main(){
  struct employee ankita ;
  ankita.id = 1;
  ankita.favChar = 'a';
  ankita.salary = 100900;
cout<<ankita.salary<<endl;
cout<<ankita.id<<endl;
cout<<"The value is "<<ankita.favChar<<endl;


   return 0;
}