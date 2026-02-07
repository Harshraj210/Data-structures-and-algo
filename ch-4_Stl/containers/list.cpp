#include <iostream>
// doubly linked list
#include <list>
using namespace std;

int main() {
    // creation
    list<int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    // mylist.push_back(40);
    mylist.push_front(200);
    mylist.pop_back();
    list<int>::iterator it = mylist.begin();
    while(it!=mylist.end()){
      cout<<*it<<endl;
      it++;
    }
    // for (int x : mylist) {
    //     cout << x << " ";
    // }
    cout << endl;
    return 0;
}