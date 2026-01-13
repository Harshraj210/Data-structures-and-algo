#include <iostream>
using namespace std;
void printsquare(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void rightinvertedtrinagle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void leftinvertedtriangle(int n)
{
}
int main()
{
  int n = 5;
  // printsquare(n);
  rightinvertedtrinagle(5);
  leftinvertedtriangle();

  return 0;
}