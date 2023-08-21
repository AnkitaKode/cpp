#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a =7;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=56;
    sum();
    cout<<glo;
   
    return 0;
}