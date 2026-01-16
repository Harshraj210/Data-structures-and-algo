#include<iostream>
using namespace std;
void hollowrighttri(int n){
  for (int i=1;i<=n;i++){
    if(i==1 || i== 2 || i==n){

      for (int j=1;j<=i;j++){
        cout<<"* ";
  
      }
    }
    else{
      cout<<"* ";
      for (int j=1;j<=(i-2);j++){
        cout<<"  ";
      }
      cout<<"* ";

    }
    cout<<endl;
  }
}
int main(){
  hollowrighttri(8);
  return 0;
}