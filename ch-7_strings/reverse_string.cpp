#include <iostream>
#include <algorithm>
#include <cctype>   // used bcz for alpha
using namespace std;

string reverseOnlyLetters(const string& s) {
  // copy bcz string is const

    string str = s;   

    int start = 0;
    int end = str.length() - 1;

    while(start < end){

        if(!isalpha(str[start])) {
            start++;
        }
        else if(!isalpha(str[end])) {
            end--;
        }
        else {
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }

    return str;
}

int main() {

    string s;
    cout << "Enter string: ";
    cin >> s;

    string result = reverseOnlyLetters(s);

    cout << "Output: " << result << endl;

    return 0;
}