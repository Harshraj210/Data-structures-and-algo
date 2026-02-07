#include <iostream>
#include <queue>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(01);
    d.push_back(02);
    d.push_back(03);
    d.erase(d.begin(), d.end());
    cout << d.size();
    return 0;
}