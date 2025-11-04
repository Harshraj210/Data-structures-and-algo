#include <iostream>
using namespace std;

int factorial(int n) 
{

  if (n == 1)
  {
    return 1;
  }

  //  Recursive Step (call itself with a smaller problem)
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  int a;
  cout << "Enter the number :";
  cin >> a;
  cout << factorial(a) << endl;
  return 0;
}