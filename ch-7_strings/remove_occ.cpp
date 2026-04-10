#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part) {

    while(s.find(part) != string::npos){
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main() {

    string s, part;

    cout << "Enter main string: ";
    cin >> s;

    cout << " string to remove: ";
    cin >> part;

    string result = removeOccurrences(s, part);

    cout << "Output " << result << endl;

    return 0;
}