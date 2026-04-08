#include <iostream>
using namespace std;

int getlen (char arr[],int len){
  int count =0;
  while(arr[count] !='\0'){
    count ++;
  }
  return count;
}

int main() {
    char arr[50];
    cout << "Enter ";
    // getline --> reaads strings after space
    cin.getline(arr, 50);
    cout<<"lenght  of arr "<<getlen(arr,50);
    return 0;
}