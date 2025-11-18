#include <iostream>
using namespace std;

int funA(int n)
{
  if (n > 100)
  {
    return n - 10;
  }
  else
  {

    return funA(funA(n + 11));
  }
}

int main (){
  int m;
  cout<<"Enter the number :";
  cin>>m;
  cout<<funA(m);
  cout<<endl;
  return 0;
}