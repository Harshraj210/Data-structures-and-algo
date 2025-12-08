#include <iostream>
using namespace std;

int main()
{
  int size = 3;
  int *arr = new int[size];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;

  cout << "Original Array :" << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

  int newsize = 5;
  int *temparr = new int[newsize];

  for (int i = 0; i < 5; i++)
  {
    temparr[i] = arr[i];
  }
  delete[] arr;
  arr = temparr;
  arr[3] = 40;
  arr[4] = 50;
  cout << "Grown Array: " << arr[3] << ", " << arr[4] << endl;
  return 0;
}