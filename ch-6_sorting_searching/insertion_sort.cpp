#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int>& v) {
    int n = v.size();
    // i=0 ignored
    for (int i = 1; i < n; i++) {
        int key = v[i];
        // moves backward
        int j = i - 1;
        // If previous element is greater than key   shift it to the right
        while (j >= 0 && v[j] > key) {
            // swapping
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}
int main() {
    vector<int> v = {5, 4, 3, 2, 1, 0};
    insertion(v);
    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}