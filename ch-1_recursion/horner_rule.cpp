#include <iostream>
using namespace std;

// We add a third parameter 's' to hold the running sum.
// We give it a default value of 1.0 for the first call.
double e(int x, int n, double s = 1.0)
{
    // 1. Base Case
    if (n == 0)
    {
        return s;
    }

    // 2. Calculate the new sum (Horner's Rule)
    // s = 1 + (x/n) * s
    s = 1 + (double)x / n * s;

    // 3. Tail Recursive Call
    // We pass the updated 's' to the next step
    // This is the LAST operation, so it is Tail Recursion.
    return e(x, n - 1, s);
}

int main()
{
    int x, n;
    cout << "Enter x and n: ";
    cin >> x >> n;
    
    // We only need to pass x and n. 
    // 's' starts at 1.0 automatically.
    cout << "e^" << x << " is approximately: " << e(x, n) << endl;
    
    return 0;
}