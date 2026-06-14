#include <iostream>
#include <cmath>
using namespace std;


double f(double x) {
    return x*x*x - 2*x - 5;  
}

int main() {
    double x0, x1, x2;
    double tolerance;
    int max_iter;

    cout << "Enter first guess x0: ";
    cin >> x0;
    cout << "Enter second guess x1: ";
    cin >> x1;

    cout << "Enter tolerance: ";
    cin >> tolerance;

    cout << "Enter maximum number of iterations: ";
    cin >> max_iter;

    for (int i = 1; i <= max_iter; i++) {
        double f0 = f(x0);
        double f1 = f(x1);

        if (f1 - f0 == 0) {
            cout << "Mathematical Error! Division by zero." << endl;
            return 1;
        }

        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);

        cout << "Iteration " << i << " : x = " << x2 << endl;

        if (fabs(x2 - x1) < tolerance) {
            cout << "\nRoot found = " << x2 << endl;
            cout<<"BIDUR KHANAL";
            return 0;
        }
        x0 = x1;
        x1 = x2;
    }

    cout << "\nMaximum iterations reached. Approx root = " << x2 << endl; 

    return 0;
}
