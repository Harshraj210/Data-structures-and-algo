#include <iostream>
#include <vector>

using namespace std;
int main() {
    // creation
    vector<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    // Create an iterator it that points to the first element of vector first
    // iterator works like a pointer
    vector<int>::iterator it = first.begin();
    return 0;
}