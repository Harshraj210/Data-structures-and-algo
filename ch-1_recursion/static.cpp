#include <iostream>
using namespace std;

int Static(int n)
{
  if (n == 0)
  {
    return 0;
  }
  // 'static' means this line runs ONLY ONCE

  // here it skips this line after x = 0 and prints 12345
  static int x = 0;
  x++;
  cout << x << " ";
  return Static(n - 1);
}

int main()
{
  int m;
  cout<<"Enter the Number: ";
  cin>>m;
  Static(m);
  cout << endl;
  return 0;
}
