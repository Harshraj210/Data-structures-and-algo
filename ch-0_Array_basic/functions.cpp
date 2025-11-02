// integrating all the function in main func. is modular or procedural programming
#include <iostream>
using namespace std;

int add(int a, int b)
{
  int c;
  c = a + b;
  return c;
}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  int c = add(n1, n2);
  cout << "Value is " << c;
  return 0;
}
