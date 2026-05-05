// array where each element is a pointer
#include<iostream>
using namespace std;
int main (){
  int a = 10, b = 20, c = 30;

int* arr[3];

arr[0] = &a;
arr[1] = &b;
arr[2] = &c;

cout << *arr[0]; // 10
cout << *arr[1]; // 20
}