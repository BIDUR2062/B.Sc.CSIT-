#include<iostream>
using namespace std;
int main(){
    int n;
    double xp, result=0;   
    cout<<"Enter number of data points: ";
    cin>>n;
    double x[n], y[n];
    cout<<"Enter the value of X: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cout<<"Enter Values of Y: ";
    for(int i=0;i<n;i++){   
        cin>>y[i];
    }
    cout<<"Enter the Value of x to Find f(x): ";
    cin>>xp;

    for(int i=0;i<n;i++){
        double term=y[i];
        for(int j=0;j<n;j++){
            if(j!=i){
                term=term*(xp-x[j])/(x[i]-x[j]);
            }
        }
        result+=term;  
    }
    cout<<"Interpolated value at x= "<<xp<<" is: "<<result<<endl;
    cout<<"BIDUR KHANAL";

    return 0;
}