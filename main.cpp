#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using std::cout;
using std::endl;
using std::left;
using std::setw;
using std::string;

// Fibonacci iterativ (pentru valoarea reală)
long long fibonacciIterativVal(int n) {
    long long i = 1, j = 0;
    for (int k = 1; k <= n; ++k) {
        j = i + j;
        i = j - i;
    }
    return j;
}

// Număr teoretic de apeluri pentru metoda recursivă
// Formula: T(n) = 2 * F(n+1) - 1
long long apeluriRecursiv(int n) {
    return 2 * fibonacciIterativVal(n + 1) - 1;
}

// Număr de iterații pentru metoda iterativă
long long apeluriIterativ(int n) {
    return n;
}

// Număr de iterații pentru metoda lui Binet (fast doubling)
long long apeluriBinet(int n) {
    if (n <= 0) return 0;
    return static_cast<long long>(std::floor(std::log2(static_cast<double>(n))) + 1);
}

int main() {
    cout << left << setw(6) << "n"
         << setw(15) << "Fibonacci(n)"
         << setw(20) << "Apeluri Recursiv"
         << setw(20) << "Iterativ (iterații)"
         << setw(20) << "Binet (iterații)"
         << endl;
    cout << string(75, '-') << endl;

    // Din 5 în 5 până la 45
    for (int n = 5; n <= 45; n += 5) {
        long long fib = fibonacciIterativVal(n);
        cout << left << setw(6) << n
             << setw(15) << fib
             << setw(20) << apeluriRecursiv(n)
             << setw(20) << apeluriIterativ(n)
             << setw(20) << apeluriBinet(n)
             << endl;
    }

    return 0;
}