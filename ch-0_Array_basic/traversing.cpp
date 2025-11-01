#include<iostream>
using namespace std;


int main(){
  int A[5];
  cout<<"Enter the elements : ";
   for (int i = 0; i < 5; i++)
   {
    cin>>A[i];
   }
   cout<< "The Elements Are:"<<endl;

   for (int i = 0; i < 5; i++)
   {
    cout<<A[i]<< " ";
   }
   cout<<endl;
    return 0;
   
}