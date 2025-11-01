#include <iostream>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};
int main()
{
  Rectangle r1 = {10, 5};
  // structure to pointer
  Rectangle *p = &r1;
  // in s-->p we cannot use dot pointer
  cout << p->length << endl;
  cout << p->breadth << endl;
  return 0;
}
