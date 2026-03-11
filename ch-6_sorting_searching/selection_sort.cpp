#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &v){

    int n = v.size();

    for(int i = 0; i < n-1; i++){
      // smallest ele
        int minIndex = i;

        for(int j = i+1; j < n; j++){
          // finding smallest index
            if(v[j] < v[minIndex]){
                minIndex = j;
            }

        }

        swap(v[i], v[minIndex]);
    }
}

int main(){

    vector<int> v = {5,3,8,4,2};

    selectionSort(v);

    for(int x : v){
        cout << x << " ";
    }

}