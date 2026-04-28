#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows) {

    if(numRows == 1) return s;

    vector<string> zigzag(numRows);

    int row = 0;
    bool goingDown = true;

    for(char ch : s) {
        zigzag[row] += ch;

        if(row == 0)
            goingDown = true;
        else if(row == numRows - 1)
            goingDown = false;

        row += goingDown ? 1 : -1;
    }

    string ans = "";
    for(string str : zigzag)
        ans += str;

    return ans;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << convert(s, numRows) << endl;

    return 0;
}