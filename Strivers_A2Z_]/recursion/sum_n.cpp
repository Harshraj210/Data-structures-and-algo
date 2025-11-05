#include <iostream>
using namespace std;

int sumofN(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return sumofN(n - 1) + n;
}
int main()
{
  int m;
  cout << "Enter the number : ";
  cin >> m;
  cout << sumofN(m);
  return 0;
}