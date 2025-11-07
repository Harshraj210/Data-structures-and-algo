#include <iostream>
using namespace std;
int Reverse(int arr[], int n)
{
  if (n == 0)
  {
    return 0;
  }
  cout << arr[n - 1] << " ";
  return Reverse(arr, n - 1);
}
int main()
{
  int arr[100];
  int size;
  int i;
  cout << "Enter the size of array : ";
  cin >> size;
  cout << "Enter " << size << " elements: ";

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Reversed array: ";
  Reverse(arr, size);
  cout << endl;
  return 0;
}