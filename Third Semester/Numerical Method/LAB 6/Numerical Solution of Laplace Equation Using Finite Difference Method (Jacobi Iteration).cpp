#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const int N = 10;
    double u[N][N] = {0};
    double u_old[N][N];
    double tol = 1e-4;
    int i, j;
    double diff;
    for (i = 0; i < N; i++) {
        u[0][i] = 100;
        u[N-1][i] = 0;
        u[i][0] = 0;
        u[i][N-1] = 0;
    }

    int iter = 0;
    do {
        diff = 0;

        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
                u_old[i][j] = u[i][j];

        for(i=1;i<N-1;i++){
            for(j=1;j<N-1;j++){
                u[i][j] = 0.25 * (u_old[i+1][j] + u_old[i-1][j] + u_old[i][j+1] + u_old[i][j-1]);
                diff = max(diff, fabs(u[i][j]-u_old[i][j]));
            }
        }
        iter++;
    } while(diff > tol);
    cout << "\nSolution after " << iter << " iterations:\n";
    for(i=1;i<N-1;i++){          
        for(j=1;j<N-1;j++){      
            cout << setw(8) << fixed << setprecision(2) << u[i][j] << " ";
        }
        cout << endl;
    }
cout<<"BIDUR KHANAL";
    return 0;
}