#include <iostream>
#include <cmath>
using namespace std;

// Define the function
double f(double x) {
    return 3*x - cos(x) - 1;  // Example function
}

// Define its derivative
double df(double x) {
    return 3 + sin(x);
}

int main() {
    double x0 = 0.5;   // Initial guess
    double x1;
    double tolerance = 0.0001;
    int maxIterations = 20;

    cout << "Iteration\tRoot Approximation\n";
    for (int i = 1; i <= maxIterations; i++) {
        x1 = x0 - f(x0) / df(x0);  // Newton–Raphson formula
        cout << i << "\t\t" << x1 << endl;

        if (fabs(x1 - x0) < tolerance) {
            cout << "\nRoot found at x = " << x1 << " after " << i << " iterations.\n";
            return 0;
        }

        x0 = x1; // Update for next iteration
    }

    cout << "\nApproximate Root = " << x1 << endl;
    return 0;
}
