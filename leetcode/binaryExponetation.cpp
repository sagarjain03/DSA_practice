#include <iostream>
#include <cmath>
using namespace std;

// Function to compute x^n using binary exponentiation
double binaryExponetiation(double x, int n) {
    double result = 1.0;
    long long absN = abs((long long)n); // Handle negative exponents safely

    if (n < 0) { 
        x = 1 / x; // Invert base for negative exponents
    }

    while (absN > 0) {
        if (absN % 2 == 1) { // If absN is odd
            result *= x;
        }
        x *= x; // Square the base
        absN /= 2; // Halve the exponent
    }

    return result;
}

int main() {
    // Test the binaryExponetiation function
    cout << "4^5 = " << binaryExponetiation(4, 5) << endl; // Expected: 1024
    cout << "2^-3 = " << binaryExponetiation(2, -3) << endl; // Expected: 0.125
    return 0;
}
