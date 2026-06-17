#include <iostream>
#include <vector>
using namespace std;

void merge_sorted_arr(int arr1[], int size1, int arr2[], int size2, vector<int>& output) {
    int i = 0;
    int j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            output.push_back(arr1[i]);
            i++;
        } else {
            output.push_back(arr2[j]);
            j++;
        }
    }

    while (i < size1) {
        output.push_back(arr1[i]);
        i++;
    }

    while (j < size2) {
        output.push_back(arr2[j]);
        j++;
    }
}

int main() {
    int arr1[] = {1, 2, 4, 6, 8};
    int arr2[] = {3, 5, 7, 9};

    vector<int> output;

    merge_sorted_arr(arr1, 5, arr2, 4, output);

    cout << "Output: ";

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}