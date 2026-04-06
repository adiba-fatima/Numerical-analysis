#include <iostream>
#include <cmath>
using namespace std;

// Define the function
double f(double x) {
    return 3*x - cos(x) - 1;  // Example function
}

int main() {
    double x0 = 0, x1 = 1, x2;
    double tolerance = 0.0001;
    int maxIterations = 20;

    cout << "Iteration\tRoot Approximation\n";
    for (int i = 1; i <= maxIterations; i++) {
        // Secant Method formula
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        cout << i << "\t\t" << x2 << endl;

        if (fabs(x2 - x1) < tolerance) {
            cout << "\nRoot found at x = " << x2 << " after " << i << " iterations.\n";
            return 0;
        }

        // Update values
        x0 = x1;
        x1 = x2;
    }

    cout << "\nApproximate Root = " << x2 << endl;
    return 0;
}
