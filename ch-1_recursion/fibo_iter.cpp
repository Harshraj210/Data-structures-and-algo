#include <iostream>
using namespace std;

int fibo(int n)
{
  int start = 0, end = 1, s, i;

  if (n <= 1)
  {
    return n;
  }
  for (i = 2; i <= n; i++)
  {
    s = start + end;
    start = end;
    end = s;
  }
  return s;
  //  return fibo(n-2)+fibo(n-1);
}
int main()
{
  int m;
  cout << "Enter the number :";
  cin >> m;
  cout << fibo(m);
  cout << endl;
  return 0;
}