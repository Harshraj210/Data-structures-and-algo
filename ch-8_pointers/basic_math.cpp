#include <vector>

// naive approach --> basic method cheks all no from 2 to n-1  brute force
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
bool isPrimeSqrt(int n) {
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

// Sieve of Eratosthenes --->  Instead of checking each number,
// we REMOVE (mark) multiples of primes

// suppose the we have to find till 20 then we check till 5 only bcz sqrt of 20 is 4.75 ==5 after that all are prime no.

std::vector<bool> sieve(int n) {

    std::vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= n; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    return prime;
}

// arr to pointer 
// arr={1.2.3.4,5}
// when we write  arr[2] --> *(arr+2)= *(arr +4*2) == *(arr 112) == 3