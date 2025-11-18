#include <iostream>
using namespace std;

double powA(int m, int n)
{
  if (n == 0)
  {
    return 1.0;
  }
  if(n<0){
    return 1.0/powA(m,-n);
}
// (m^2)^2 = m^4
// m^n = (m*m)^(n/2)
if(n%2==0){
  return powA(m*m,n/2);
}
  else
  {
    return powA(m, n - 1) * m;
  }

}

int main()
{
  double a;
  int b;
  cout << "Enter the base number:";
  cin >> a;
  cout << "Enter power number: ";
  cin >> b;
  cout<<"Result : " << powA(a, b);
  return 0;
}