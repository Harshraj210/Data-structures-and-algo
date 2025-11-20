#include <iostream>
using namespace std;

// 1. Create a "Notepad" (Array)
// We make it big enough (e.g., 100) and fill it with -1
int F[100]; 

void init_F() {
    for(int i=0; i<100; i++) {
        F[i] = -1;
    }
}

int fibo(int n){
    // Base Case
    if(n <= 1){
        F[n] = n; // Save it!
        return n;
    }
    
    // 2. The Check: Have we solved this already?
    if(F[n] != -1) {
        return F[n]; // Return the saved answer immediately
    }

    // 3. Calculate and SAVE the result
    // Instead of just returning, we store it in F[n] first
    F[n] = fibo(n-2) + fibo(n-1);
    
    return F[n];
}

int main (){
    int m;
    
    // Initialize the array with -1s first!
    init_F();
    
    cout << "Enter the number: ";
    cin >> m;
    cout << fibo(m) << endl;
    return 0;
}