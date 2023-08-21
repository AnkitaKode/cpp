#include<iostream>
using namespace std;
typedef struct employee
{
    int id;
    char favchar;
    float salary;
}
ep;
union money
{
  /* data */
  int rice;
  char car;
  float pounds;
};


int main(){
     ep ankita;
     union money m1;
     m1.rice = 89;
     m1.car = 'c';
     cout<<m1.rice;
      
  

   return 0;
}