#include <iostream>
#include <string>
using namespace std;

string decodeMessage(string message){

    string ans = "";

    for(char ch : message){
      // string to number
        int num = ch - '0';
        // number to string
        char decoded = 'a' + num - 1;
        ans.push_back(decoded);
    }

    return ans;
}

int main(){
    string message;

    cout << "Enter numeric string: ";
    cin >> message;

    cout << "Decoded message: " << decodeMessage(message) << endl;

    return 0;
}