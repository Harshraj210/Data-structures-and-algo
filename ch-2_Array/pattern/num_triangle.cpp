#include <iostream>
using namespace std;
void num_tri(int n){

  for (int i = 0;i<=n;i++){
    for (int j = 0;j<=i;j++){
      cout<<i;
      
    }
    cout<<endl;
  }
}
void num_inc_tri(int n){
  int count =1;

  for (int i = 0;i<=n;i++){
    for (int j = 0;j<=i;j++){
      cout<<count<<" ";
      count++;
      
    }
    cout<<endl;
  }
}



int main (){
  // num_tri(5);
  num_inc_tri(4);
  return 0;
}