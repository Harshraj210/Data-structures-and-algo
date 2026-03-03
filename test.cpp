#include <iostream>
using namespace std;

int countTotalSetBits(int n) {
    int total = 0;

    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x > 0) {
            total += (x & 1);  
            x = x >> 1;        
        }
    }
    return total;
}


