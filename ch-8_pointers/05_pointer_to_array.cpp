// pointer that points to an entire array
#include<iostream>

using namespace std;
int main (){
  int arr[3] = {10, 20, 30};

int (*ptr)[3] = &arr;

cout << (*ptr)[0]; // 10
cout << (*ptr)[1]; // 20
}