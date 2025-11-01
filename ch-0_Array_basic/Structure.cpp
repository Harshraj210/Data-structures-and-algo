// A structure (often shortened to struct) is a user-defined data type that lets you group together different types of variables under a single name.


#include<iostream>
using namespace std;

struct Rectangle
{
  int lenght;
  int breadth;
};

int main (){
  struct Rectangle r1 = {10,5};
  cout<<sizeof(r1);
  // dot operstor for accessing memmbers
  cout<<r1.lenght<<endl;

  cout<<r1.breadth<<endl;;
  return 0;
  
  
  
}

