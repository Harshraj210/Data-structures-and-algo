#include<iostream>
using namespace std;

class functorone{
  public:
        bool operator()(int a,int b){
          return a>b;
        }
};
int main (){
  functorone cmp;
  if(cmp (10,5)==true){
    cout<<"Greater";
  }
  else{
    cout<<"Small";
  }
  return 0;
}
