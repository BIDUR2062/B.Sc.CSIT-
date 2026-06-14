#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of data points"<<endl;
    cin >> n;
    double x[n], y[n], Y[n];
    cout<<"Enter the values of X: ";
    for (int i = 0; i < n; i++) cin >> x[i];
    cout<<"Enter the Value of y: ";
    for (int i = 0; i < n; i++) {
        cin >> y[i];
        Y[i] = log(y[i]);   
    }
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0; 
    for(int i=0;i<n;i++){
        sumX += x[i];
        sumY += Y[i];
        sumXY += x[i] * Y[i];
        sumX2 += x[i] * x[i];   
    }
    double b = (n*sumXY - sumX*sumY) / (n*sumX2 - sumX*sumX);
    double a = (sumY - b*sumX)/n ;
    double A = exp(a);   
    double B = exp(b);
    cout << "Curve: y = " << A << " e^(" << b << "x)" << endl;
    cout<<"\nBIDUR KHANAL";
    return 0;
}