#include <iostream>
using namespace std;
int main()
{
  int n, m, sum = 0, r;
  cin >> n;
  m = n;

  while (n > 0)
  {
    r = n % 10;
    n = n / 10;
    sum = sum + r * r * r;
  }
  if (sum == m)
  {
    cout << "Armstrong : " << m;
  }
  else
  {
    cout << "Not Armstrong : " << m;
  }
  return 0;
}