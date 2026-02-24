#include<iostream>
using namespace std;
int main (){
  // Pointer to const data
  int a = 10;
int b = 20;

const int* p = &a;
// *p = 30;   //  cannot modify data
p = &b; 
// const pointer 
int a = 10;
int b = 20;

int* const p = &a;
*p = 30;   //  modify data
p = &b;    //  cannot change address
return 0;   //  pointer can move
}
