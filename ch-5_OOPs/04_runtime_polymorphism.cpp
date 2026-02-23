#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    Complex() {
        real = imag = -1;
    }
    Complex(int r, int i) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    void print() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
   

    Complex A(2, 5);
    Complex B(1, 2);

    Complex C = A + B;

    A.print();
    B.print();
    C.print();
    return 0;
}