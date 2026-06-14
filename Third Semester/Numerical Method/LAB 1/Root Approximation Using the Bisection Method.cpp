#include <iostream>
#include <cmath>
using namespace std;


double function(double x) {
    return x*x*x - 2*x - 5;
}

int main() {
    double a, b;
    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;

    if (function(a) * function(b) >= 0) {
        cout << "Invalid interval. f(a) and f(b) must have opposite signs." << endl;
        return 1;
    }

    int iter = 0;
    int max_iter;
    cout << "Enter the maximum number of iterations: ";
    cin >> max_iter;

    double precision;
    cout << "Enter the precision: ";
    cin >> precision;

    double c; 
    while (iter < max_iter) {
        c = (a + b) / 2.0;
        cout << "Iteration " << iter + 1 << ": c = " << c << ", f(c) = " << function(c) << endl;

        if (fabs(function(c)) < precision) { 
            cout << "Root found: " << c << endl;
            break;
        }

        if (function(a) * function(c) < 0)
            b = c;
        else
            a = c;

        iter++;
    }

    if (iter == max_iter)
        cout << "Maximum iterations reached. Approximate root: " << c << endl;
cout<<"BIDUR KHANAL"<<endl;
    return 0;
}
