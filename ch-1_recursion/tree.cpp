#include <iostream>
using namespace std;

void pritnTon(int n)
{
  if (n > 0)
  {

    cout << n << " ";
    pritnTon(n - 1);
    pritnTon(n - 1);
  }
}
int main()
{

  int m = 5;
  pritnTon(m);
  cout << endl;
  return 0;
}
