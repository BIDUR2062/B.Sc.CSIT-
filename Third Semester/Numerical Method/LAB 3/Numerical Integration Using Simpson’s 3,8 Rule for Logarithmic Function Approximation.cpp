#include <iostream>
#include <cmath>
using namespace std;

double function(double x) {
    return log(x);
}
int main() {
    double a, b;
    int n;
    cout << "Enter the interval [a, b]: " << endl;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "log(x) is not defined for x <= 0";
        return 0;
    }
    cout << "Enter the number of intervals: " << endl;
    cin >> n;
    if (n % 3 != 0) {
        cout << "Error! Number of intervals must be a multiple of 3.";
        return 0;
    }
    double h = (b - a) / n;
    double sum1 = 0.0, sum2 = 0.0;

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0)
            sum2 += function(x);
        else
            sum1 += function(x);
    }
    double result = (3 * h / 8) *(function(a) + function(b) + 3 * sum1 + 2 * sum2);
    cout << "The result is: " << result << endl;
    cout<<"BIDUR KHANAL";
    return 0;
}
