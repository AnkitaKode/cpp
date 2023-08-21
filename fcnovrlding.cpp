#include<iostream>
using namespace std;
int volume( double r , int h ){
    return(3.14*r*r*h);
}
int volume( int r , int h){
    return(r*h);
}



int main(){

  
cout<<"The volume of cuboid of 3,7 is " <<volume(3,7)<<endl;
cout<<"The volume of cube of side 5 is " <<volume(5,5)<<endl;

   return 0;
}