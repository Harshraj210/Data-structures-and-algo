#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {

    if(s.size() != t.size()) return false;

    vector<int> freq(26, 0);

    for(char c : s) {
        freq[c - 'a']++;
    }

    for(char c : t) {
        freq[c - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if(isAnagram(s, t))
        cout << "True";
    else
        cout << "False";

    return 0;
}