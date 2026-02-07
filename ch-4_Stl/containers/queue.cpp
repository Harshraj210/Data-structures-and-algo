#include <iostream>
#include <queue>
using namespace std;
int main (){
  // jo phle aaega wo phle jaega -->queue
  queue<int> q;
  queue<int> s;
  q.push(10);
  q.push(20);
  s.push(200);
  s.push(300);
  q.swap(s);
  cout<<q.front()<<" "<<q.back()<<endl;
  //  q.push(10);
  // q.push(20);
  // q.push(30);


}