#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> first;
    first.push_back(1);
    first.push_back(4);
    first.push_back(3);

    vector<int> second;
    second.push_back(1);
    second.push_back(9);
    second.push_back(5);
    vector<int> result;
    // set union --> sb ko likh do
    // set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    // set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    for (int a : result) {
        cout << a << " ";
    }
    return 0;
}