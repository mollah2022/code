#include <iostream>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base cases
    if (n <= 1)
        return n;
    
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to n terms
void printFibonacciSeries(int n) {
    if (n <= 0)
        return;
    
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
}

int main() {
    int terms;
    std::cin >> terms;
    printFibonacciSeries(terms);
    return 0;
}
