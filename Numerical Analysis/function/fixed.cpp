#include <iostream>
#include <cmath>
using namespace std;

// Original equation: f(x) = 3x - cos(x) - 1 = 0
// Rearranged into g(x) = (cos(x) + 1)/3
double g(double x) {
    return (cos(x) + 1) / 3.0;
}

int main() {
    double x0 = 0.5;   // Initial guess
    double x1;
    double tolerance = 0.0001;
    int maxIterations = 20;

    cout << "Iteration\tRoot Approximation\n";
    for (int i = 1; i <= maxIterations; i++) {
        x1 = g(x0); // Apply fixed point formula
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
