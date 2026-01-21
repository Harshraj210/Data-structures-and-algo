#include<iostream>
using namespace std;
void hollow_pyramid(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    if(i==1){
      cout<<"*";
    }
    else if(i==n){
      for(int j=1;j<=2*n-1;j++){
        cout<<"*";
      }
    }
    else{
      cout<<"*";
      for(int j=1;j<=2*i-3;j++){
        cout<<" ";
      }
      cout<<"* ";
    }
   
    cout<<endl;
  }
}
int main(){
  hollow_pyramid(5);
  return 0;
}