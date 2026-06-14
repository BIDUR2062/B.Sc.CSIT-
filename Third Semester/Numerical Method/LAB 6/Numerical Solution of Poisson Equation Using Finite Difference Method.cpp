#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 4;
    double u[4][4] = {0}, un[4][4];
    double h = 1.0/3.0;
    double tol = 1e-6;
    double error;

    for(int i=0;i<n;i++) u[i][n-1] = 150;
    for(int j=0;j<n;j++) u[n-1][j] = 150;

    do {
        error = 0.0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                un[i][j] = u[i][j];

        for(int i=1;i<n-1;i++)
            for(int j=1;j<n-1;j++)
                u[i][j] = 0.25*(un[i+1][j] + un[i-1][j] + un[i][j+1] + un[i][j-1] + h*h*64*i*j/((n-1)*(n-1)));

        for(int i=1;i<n-1;i++)
            for(int j=1;j<n-1;j++)
                error = max(error, fabs(u[i][j] - un[i][j]));
    } while(error > tol);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << u[i][j] << "\t";
        cout << endl;
    }
cout<<"BIDUR KHANAL";
    return 0;
}
