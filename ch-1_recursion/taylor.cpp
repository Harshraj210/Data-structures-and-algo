#include <iostream>
using namespace std;

int e(int x, int n)
// Static variables retain their value between recursive calls
{
  // power of x
  static int p = 1;
  // denominator factorial n
  static int f = 1;

  if (n == 0)
  {
    return 1;
  }
  int result = e(x, n - 1);
  //  updating the power
  p = p * x;
  // updating the factorial
  f = f * n;
  return result + (p / f);
}
int main()
{
  int x, n;
  cout << "Enter the numbers: ";
  cin >> x >> n;
  cout << "e^" << x << " is approximately: " << e(x, n) << endl;
  return 0;
}