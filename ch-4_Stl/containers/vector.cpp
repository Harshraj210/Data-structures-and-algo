#include <iostream>
#include <vector>

using namespace std;
int main() {
    // creation
    vector<int> marks;
    // .begin() -->points to starting ele of container
    // cout << *(marks.begin());
    // cout << *(marks.end());

    // push_back--> adds ele at first then at back;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    // marks.clear();

    marks.insert(marks.begin(), 50);
    // insert()--> is used to add elements into a container at a specific position.
    // begin-->iterator pointing to the first element of a container.

    cout << "SIze : " << marks.size() << endl;
    // pop_back--> removes ele from ARRAY
    marks.pop_back();
    cout << "SIze : " << marks.size() << endl;
    cout << marks.at(0) << endl;
    return 0;
}
