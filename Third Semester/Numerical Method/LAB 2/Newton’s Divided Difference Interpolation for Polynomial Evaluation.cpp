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
    cout<<"BIDUR KHANAL";
    delete[] x;
    delete[] y;
    delete[] coef;

    return 0;
}
