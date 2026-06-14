#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double x[20], y[20][20];   

    cout << "Enter x values:\n";
    for (int i = 0; i < n; i++)
        cin >> x[i];

    cout << "Enter y values:\n";
    for (int i = 0; i < n; i++)
        cin >> y[i][0];
    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }
    cout << "\nBackward Difference Table:\n";
    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for (int j = 0; j <= i; j++)
            cout << y[i][j] << "\t";
        cout << endl;
    }

    double value;
    cout << "\nEnter value of x to interpolate: ";
    cin >> value;

    double h = x[1] - x[0];
    double u = (value - x[n - 1]) / h;

    double sum = y[n - 1][0];
    double uTerm = 1.0;
    int fact = 1;

    for (int i = 1; i < n; i++) {
        uTerm *= (u + (i - 1));
        fact *= i;
        sum += (uTerm * y[n - 1][i]) / fact;
    }
    cout << "\nInterpolated value at x = " << value << " is: " << sum << endl;
    cout<<"BIDUR KHANAL";

    return 0;
}
