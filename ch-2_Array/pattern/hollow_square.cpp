#include <iostream>
using namespace std;

void hollow_square(int n)
{
  int i, j;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1 || i == n)
    {
      for (int j = 1; j <= n; j++)
      {
        cout << "* ";
      }
    }
    else
    {
      cout << "* ";
      for (int j = 1; j <= (n - 2); j++)
      {
        cout << " ";
      }
      cout << "* ";
    }
    cout << endl;
  }
}
int main()
{
  hollow_square(5);
  return 0;
}