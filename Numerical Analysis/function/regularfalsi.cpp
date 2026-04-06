#include <iostream>
#include <cmath>
using namespace std;

// Define the function
double f(double x) {
    return 3*x - cos(x) - 1;  // Example function
}

int main() {
    double a = 0, b = 1, c;
    double tolerance = 0.0001;
    int maxIterations = 20;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. f(a) and f(b) must have opposite signs.\n";
        return -1;
    }

    cout << "Iteration\tRoot Approximation\n";
    for (int i = 1; i <= maxIterations; i++) {
        // Regula Falsi formula
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));
        cout << i << "\t\t" << c << endl;

        if (fabs(f(c)) < tolerance) {
            cout << "\nRoot found at x = " << c << " after " << i << " iterations.\n";
            return 0;
        }

        // Update interval
        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "\nApproximate Root = " << c << endl;
    return 0;
}
