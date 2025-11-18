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
  int a, b;
  cout << "Enter the base number:";
  cin >> a;
  cout << "Enter power number: ";
  cin >> b;
  cout<<"Result : " << powA(a, b);
  return 0;
}