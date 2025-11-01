// A pointer is a special type of variable that stores the memory address of another variable.

// int x = 10 is like a box that holds the value 10
// int *ptr = &x;


#include<iostream>
using namespace std;
int main(){
  int a =10;
  cout<<a<<endl;
  cout<<&a<<endl;
  int *ptr;
  ptr = &a;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  return 0;
}