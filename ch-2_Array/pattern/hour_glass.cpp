#include<iostream>
using namespace std;
void hourglass(int n){
  for(int i=1;i<=n;i++){
    // for spaces
    for(int j=1;j<=i-1;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*(n-i+1);j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  // for lower spaces
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    // for stars
    for(int j=1;j<=2*n;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
int main (){
  hourglass(3);
  return 0;
}