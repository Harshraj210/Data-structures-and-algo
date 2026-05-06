// sieve of erasthothenes --> for findding thew mulprime no. and we mark the multiples of prime no. as false till it's
// half suppose we  have to mark 4 but it is already marked bcz it is multiple of 2

#include <iostream>
#include <vector>
using namespace std;

vector<bool> Sieve(int n) {
    vector<bool> seive(n + 1, true);
    for (int i = 2; i <= n; i++) {
        if (seive[i] == true) {
            int j = i * 2;
            while (j <= n) {
                seive[j] = false;
                j += i;
            }
        }
    }
    return seive;
}
int main() {
    vector<bool> sieve = Sieve(25);
    for (int i = 0; i <= 25; i++) {
        if (sieve[i]) {
            cout << i << " ";
        }
    }
    return 0;
}

// optimised way i*i
// class Solution {
// public:
//     int countPrimes(int n) {

//         if(n <= 2) return 0;

//         vector<bool> prime(n, true);

//         prime[0] = prime[1] = false;

//         for(int i = 2; i * i < n; i++) {

//             if(prime[i]) {

//                 for(int j = i * i; j < n; j += i) {
//                     prime[j] = false;
//                 }
//             }
//         }

//         int count = 0;

//         for(int i = 2; i < n; i++) {
//             if(prime[i]) count++;
//         }

//         return count;
//     }
// };
