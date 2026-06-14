#include <iostream>
#include <cmath>
using namespace std;

double function(double x) {
    return log(x);
}

int main() {
    int n;
    double a, b;

    cout << "Enter the number of intervals: ";
    cin >> n;

    cout << "Enter the limits (a b): ";
    cin >> a >> b;

    double h = (b - a) / n;
    double sum = 0.0;

   
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += function(x);
    }

    double result = (h / 2) * (function(a) + function(b) + 2 * sum);

    cout << "Result = " << result << endl;
    cout<<"BIDUR KHANAL";

    return 0;
}
