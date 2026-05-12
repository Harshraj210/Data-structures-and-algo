// subsequence --> oder cannot be reversed , diff from substring 
// include or exclude


#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {

public:

    void sol(string s,
             int index,
             string output,
             vector<string>& ans) {

        // base case
        if(index >= s.size()) {
            ans.push_back(output);
            return;
        }

        // include
        char ch = s[index];
        sol(s, index + 1, output + ch, ans);

        // exclude
        sol(s, index + 1, output, ans);
    }

    vector<string> generateAllSubsequences(string s) {

        vector<string> ans;

        string output = "";

        sol(s, 0, output, ans);

        return ans;
    }
};

int main() {

    Solution obj;

    string s = "abc";

    vector<string> ans =
        obj.generateAllSubsequences(s);

    for(string x : ans) {
        cout << "\"" << x << "\"" << endl;
    }

    return 0;
}