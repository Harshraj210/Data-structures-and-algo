#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {

        
        if(s.size() != goal.size()) return false;

        //  double the string
        string temp = s + s;

        // check if goal exists
        // npos --> is not found and used with find()
        if(temp.find(goal) != string::npos) {
            return true;
        }

        return false;
    }
};

int main() {
    Solution obj;

    string s = "abcde";
    string goal = "cdeab";

    if(obj.rotateString(s, goal)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}