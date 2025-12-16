#include<iostream>
using namespace std;
int main (){
  int age;
  cout<<"Enter the age ";
  cin>>age;

  // ? --> ke baad true condition 
  // : --> ke  baad false condition 


  (age>18)? cout<<"VAlid" : cout<<"Invalid";
  return 0;

}