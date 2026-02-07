// 2d array
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr(5, vector<int>(5, 0));
    // 5 rows ,5 cols ,each cell is 0
    // A vector of vectors

    // Each inner vector represents one row return 0;

    int totalrows = arr.size();
    int totalcols = arr[0].size();

    vector<vector<int>> brr(4);
    // jagged arraY
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(7);
    brr[2] = vector<int>(8);
    brr[3] = vector<int>(5);
    int totalrowscount = brr.size();
    for (int i = 0; i < brr.size(); i++) {
        cout << "Columns in row " << i << " = " << brr[i].size() << endl;
    }
}
