#include<iostream>
using namespace std;

 class Complex{
  int real;
  int imag;
  Complex(){
    real=imag=-1;

  }
  Complex(int r, int i):real(r),imag(i){}
  void print(){
    cout<<this->real<<" "<<this->imag;
  }
  
 };
 int main (){
  
 }