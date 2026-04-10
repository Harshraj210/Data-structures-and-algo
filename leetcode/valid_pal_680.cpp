#include <iostream>
#include <string>
using namespace std;

//  function to check palindrome
bool checkp(string s, int start, int end){
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


bool validPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;

    while(start <= end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            // try removing one character
            return checkp(s, start + 1, end) || checkp(s, start, end - 1);
        }
    }
    return true;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    if(validPalindrome(s)){
        cout << "True " << endl;
    }
    else{
        cout << "False " << endl;
    }

    return 0;
}