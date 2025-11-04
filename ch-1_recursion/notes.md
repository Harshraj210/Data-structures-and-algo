. A recursive function is a function that calls itself to solve a problem.

#include <iostream>

// 'n!' is n * (n-1)!
int factorial(int n) {
    
    // 1. Base Case (the stopping condition)
    if (n == 1) {
        return 1;
    } 
    
    // 2. Recursive Step (call itself with a smaller problem)
    else {
        return n * factorial(n - 1); 
    }
}

int main() {
    std::cout << factorial(4) << std::endl; // Prints 24
    return 0;
}