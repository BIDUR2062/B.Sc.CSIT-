#include <iostream>
#include<cmath>
#include <vector>
using namespace std;
vector<double> gaussianElimination(vector<vector<double>> A, vector<double> B) {
    int n = B.size();
    for(int i = 0; i < n; i++) {
        
        for(int k = i+1; k < n; k++)
            if(abs(A[k][i]) > abs(A[i][i]))
                swap(A[i], A[k]), swap(B[i], B[k]);
        for(int j = i+1; j < n; j++) {
            double factor = A[j][i]/A[i][i];
            for(int k = i; k < n; k++)
                A[j][k] -= factor * A[i][k];
            B[j] -= factor * B[i];
        }
    }
    vector<double> X(n);
    for(int i = n-1; i >= 0; i--) {
        X[i] = B[i];
        for(int j = i+1; j < n; j++)
            X[i] -= A[i][j]*X[j];
        X[i] /= A[i][i];
    }
    return X;
}
int main() {
    int m; 
    int n; 
    cout << "Enter number of data points: ";
    cin >> m;
    cout << "Enter degree of polynomial: ";
    cin >> n;
    vector<double> x(m), y(m);
    cout << "Enter x values:\n";
    for(int i=0;i<m;i++) cin >> x[i];
    cout << "Enter y values:\n";
    for(int i=0;i<m;i++) cin >> y[i];
    vector<vector<double>> A(n+1, vector<double>(n+1, 0));
    vector<double> B(n+1, 0);
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
            for(int k=0;k<m;k++)
                A[i][j] += pow(x[k], i+j);
        }
        for(int k=0;k<m;k++)
            B[i] += pow(x[k], i) * y[k];
    }

    vector<double> coeff = gaussianElimination(A, B);
    cout << "Polynomial coefficients:\n";
    for(int i=0;i<=n;i++)
        cout << "a" << i << " = " << coeff[i] << endl;

    return 0;
}
