#include <iostream>
using namespace std;

void dividedDifference(double* x, double* y, double* coef, int n) {
    for (int i = 0; i < n; i++)
        coef[i] = y[i];

    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            coef[i] = (coef[i] - coef[i - 1]) / (x[i] - x[i - j]);
        }
    }
}

double newtonEval(double* x, double* coef, int n, double value) {
    double result = coef[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        result = result * (value - x[i]) + coef[i];
    }
    return result;
}

double newtonDerivative(double* x, double* coef, int n, double value) {
    double derivative = 0.0;

    for (int i = 1; i < n; i++) {
        double term = coef[i];

        for (int j = 0; j < i; j++) {
            double product = 1.0;

            for (int k = 0; k < i; k++) {
                if (k != j)
                    product *= (value - x[k]);
            }

            derivative += term * product;
        }
    }

    return derivative;
}

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double* x = new double[n];
    double* y = new double[n];
    double* coef = new double[n];

    cout << "Enter x values:\n";
    for (int i = 0; i < n; i++)
        cin >> x[i];

    cout << "Enter y values:\n";
    for (int i = 0; i < n; i++)
        cin >> y[i];

    dividedDifference(x, y, coef, n);

    double value;
    cout << "Enter value to evaluate polynomial: ";
    cin >> value;

    double result = newtonEval(x, coef, n, value);
    cout << "Polynomial value at " << value << " is " << result << endl;

    double der = newtonDerivative(x, coef, n, value);
    cout << "Derivative at " << value << " is " << der << endl;

    delete[] x;
    delete[] y;
    delete[] coef;
cout<<"BIDUR KHANAL";
    return 0;
}

