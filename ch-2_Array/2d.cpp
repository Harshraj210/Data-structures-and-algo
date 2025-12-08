#include<iostream>
using namespace std;

int main (){
  int arr [10][10];
  int r,c,i,j;
  
  cout<<"Enter the rows amd columns :";
  cin>>r>>c;

  cout<<"Enter the elements: ";
  for (int i=0;i<r;i++){
    for(int j = 0;j<c;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"The elements are :"<<endl;
  for (int i=0;i<r;i++){
    for(int j = 0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
     cout << endl;
  }
}


