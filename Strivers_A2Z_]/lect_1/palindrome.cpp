#include <iostream>
using namespace std;

int main()
{
  int a, r, pal = 0;
  int org;
  cin >> a;
  org = a;
  while (a > 0)
  {
    r = a % 10;
    a = a / 10;
    pal = pal * 10 + r;
  }
  if (org == pal)
  {
    cout << "Palindrome: " << pal;
  }
  else
  {
    cout << "Not palindrome : " << org;
  }
  return 0;
}