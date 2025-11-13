## 🧠 Recursion Notes
 ##  A recursive function is a function that calls itself to solve a problem.

```cpp
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

##Stack Overflow ->  you forget the base case (the stopping condition), the function will call itself forever.

When the program tries to push one more function onto the full stack, it crashes. This crash is called a Stack Overflow.



##Time Complexity
    time complexicity --> The general formula is:
    Time Complexity = (Total Number of Recursive Calls) (Time Complexity of Work in Each Call)


 ##Types of Recursion
    Tail Recursion

    Head Recursion

    Tree Recursion

    Indirect Recursion

    Nested Recursion


    ##Head Recursion 
        Head recursion is a type of recursion where the recursive call is the first (or one of the first) operations in the function.

        ```cpp
        #include <iostream>

void printOneToN(int n) {
    // Base Case
    if (n == 0) {
        return;
    }
    
    // 1. Recursive Call (at the "head")
    // The function calls itself FIRST.
    printOneToN(n - 1); 
    
    // 2. Work (is done AFTER the call returns)
    // This line "waits" until the call above is finished.
    std::cout << n << " "; 
}

int main() {
    printOneToN(3); // Output: 1 2 3
    return 0;
}

