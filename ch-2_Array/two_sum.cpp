#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, tar;

   
    cout << "Enter number of elements: ";
    cin >> n;

  
    vector<int> arr(n); 

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    cout << "Enter target sum: ";
    cin >> tar;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
           
            if (arr[i] + arr[j] == tar) {
                cout << "Found pair: indices [" << i << ", " << j << "]" << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "No pair found.";
    }

    return 0;
}