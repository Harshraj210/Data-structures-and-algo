#include <iostream>
using namespace std;

void printn(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  printn(n - 1);
}

int main()
{
  int m;

  cout << "Enter a number: ";
  cin >> m;

  printn(m);
  cout << endl;

  return 0;
}