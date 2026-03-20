#include <iostream>
using namespace std;

int sumOfTheDigitsOfHarshadNumber(int x) {

    int sum = 0;
    int temp = x;
    // itreation
    while(temp > 0){
        sum += temp % 10;
        temp /= 10;
    }

    if(x % sum == 0)
        return sum;

    return -1;
}

int main() {

    int x;
    cin >> x;

    cout << sumOfTheDigitsOfHarshadNumber(x);

    return 0;
}