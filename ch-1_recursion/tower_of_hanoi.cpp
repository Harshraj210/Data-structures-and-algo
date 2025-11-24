#include <iostream>
using namespace std;

void towerOfHanoi(int n, int src, int helper, int dest)
{

  if (n == 0)
  {
    return;
  }

  // Move (n-1) from Source src -> Helper helpe using Destination dest
  towerOfHanoi(n - 1, src, dest, helper);

  //  The Move
  // Move the largest disk from Source -> Destination
  cout << "Move disk " << n << " from Rod " << src << " to Rod " << dest << endl;

  // Move (n-1) from Helper (helper) -> Destination (dest) using Source (src)
  towerOfHanoi(n - 1, helper, src, dest);
}

int main()
{
  int n = 3;

  towerOfHanoi(n, 1, 2, 3);

  return 0;
}