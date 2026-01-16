#include <iostream>
using namespace std;
void num_tri(int n){

  for (int i = 0;i<=n;i++){
    for (int j = 0;j<i;j++){
      cout<<i;
    }
    cout<<endl;
  }
}
int main (){
  num_tri(5);
  return 0;
}