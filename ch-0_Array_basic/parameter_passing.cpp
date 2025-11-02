
#include <iostream>
using namespace std;

int add(int a, int b)
{
  a++;
  cout<<a;
  return 0;
}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  int c = add(n1, n2);
  cout << "Value is " << c;
  return 0;
}
