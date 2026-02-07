#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    // max value -->highest priority

    pq.push(10);
    pq.push(40);
    pq.push(20);
    pq.push(50);

    cout<<pq.top();

    // priority_queue<int> temp = pq;
    // while (!temp.empty()) {
    //     cout << temp.top() << " ";
    //     temp.pop();
    // }

    return 0;
}
