// naive approach --> basic method cheks all no from 2 to n-1
// tc = o(n^2)
bool isPrime(int n) {
    if(n <= 1) return false;

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

//  sqrt method --> One factor is always ≤ √n
// tc o(√nn)
bool isPrime(int n) {
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}