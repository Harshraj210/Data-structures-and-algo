#include <iostream>
using namespace std;
void  diamond(int n){
  for(int i=1;i<=n;i++){
    for(int j= 1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j= 1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;

  }
  n--;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*n-2*i+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
  diamond(5);
  return 0;
}