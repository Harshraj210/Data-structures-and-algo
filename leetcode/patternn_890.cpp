#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to check if word matches pattern
bool match(string word, string pattern) {
    unordered_map<char, char> m1;
    unordered_map<char, char> m2;

    for (int i = 0; i < word.size(); i++) {
        char w = word[i];
        char p = pattern[i];

        // pattern → word
        if (m1.count(p) && m1[p] != w)
            return false;

        // word → pattern
        if (m2.count(w) && m2[w] != p)
            return false;

        m1[p] = w;
        m2[w] = p;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    string pattern;
    cout << "Enter pattern: ";
    cin >> pattern;

    vector<string> result;

    for (string word : words) {
        if (match(word, pattern)) {
            result.push_back(word);
        }
    }

    cout << "matching word: ";
    for (string w : result) {
        cout << w << " ";
    }

    cout << endl;
    return 0;
}