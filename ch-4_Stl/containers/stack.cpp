#include <iostream>
#include <stack>
// lifo
using namespace std;
int main (){
  stack<int> p;
  p.push(10);
  p.push(20);
  p.push(30);
  cout<<p.size();
  return 0;
}