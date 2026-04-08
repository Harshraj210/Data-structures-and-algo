#include <iostream>
#include <cstring>
using namespace std;

void reverse(char arr[], int size) {
    int start = 0;
    int end = strlen(arr) - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
  char arr[50];
    cout << "Enter ";
    cin.getline(arr, 50);
    reverse(arr, 50);
    cout << "Reversed string: " << arr << endl;
    return 0;
}