#include <iostream>
#include <cmath>
using namespace std;

double function(double x) {
    return log(x); 
	}

int main() {
    double a, b;
    int n;

    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;

    cout << "Enter the number of intervals (even number): ";
    cin >> n;

    if (n % 2 != 0) {
        cout << "Error: Number of intervals must be even." << endl;
        return 0; 
    }

    double h = (b - a) / n;
    double sum1 = 0.0;
    double sum2 = 0.0; 

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum2 += function(x);
        else
            sum1 += function(x);
    }

    double result = (h / 3) * (function(a) + function(b) + 4 * sum1 + 2 * sum2);

    cout << "The result is: " << result << endl;
    cout<<"BIDUR KHANAL";

    return 0;
}
