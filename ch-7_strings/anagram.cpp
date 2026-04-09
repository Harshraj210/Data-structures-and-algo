#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(const string& s, const string& t) {

    if(s.length() != t.length()){
        return false;
    }

    // copies if it const
    string a = s;
    string b = t;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main() {
    string s, t;

    cout << "Enter 1 string: ";
    cin >> s;

    cout << "Enter 2 string: ";
    cin >> t;

    if(isAnagram(s, t)) {
        cout << "anagram" << endl;
    } else {
        cout << "Not Anagram" << endl;
    }

    return 0;
}