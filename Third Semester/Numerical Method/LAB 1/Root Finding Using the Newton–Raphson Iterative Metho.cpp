#include <iostream>
#include <cmath>
using namespace std;


double f(double x) {
    return x*x - 4*x - 10;  
}

double df(double x) {
    return 2*x - 4;   
}

int main() {
    double x0, x1, tolerance;
    int max_iter;

    cout << "Enter initial guess: ";
    cin >> x0;

    cout << "Enter tolerance: ";
    cin >> tolerance;

    cout << "Enter maximum iterations: ";
    cin >> max_iter;

    for (int i = 1; i <= max_iter; i++) {
        double f0 = f(x0);
        double df0 = df(x0);

        if (df0 == 0) {
            cout << "Mathematical Error! Derivative is zero." << endl;
            cout<<"BIDUR KHANAL";
            return 1;
        }

        x1 = x0 - (f0 / df0);

        cout << "Iteration " << i << " : x = " << x1 << endl;

        
        if (fabs(x1 - x0) < tolerance) {
            cout << "\nRoot found = " << x1 << endl;
            cout<<"BIDUR KHANAL";
            return 0;
        }

        x0 = x1; 
    }

    cout << "\nMaximum iterations reached. Approx root = " << x0 << endl;
    cout<<"BIDUR KHANAL";
    return 0;
}
