#include <iostream>
using namespace std;

bool isAlphaNum(char c) {
    return (isalnum(c)); // checks letter or digit
}

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while(left < right) {

        // skip non-alphanumeric
        while(left < right && !isAlphaNum(s[left])) left++;
        while(left < right && !isAlphaNum(s[right])) right--;

        // compare case insensitive)
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if(isPalindrome(s))
        cout << "True " << endl;
    else
        cout << "False " << endl;

    return 0;
}