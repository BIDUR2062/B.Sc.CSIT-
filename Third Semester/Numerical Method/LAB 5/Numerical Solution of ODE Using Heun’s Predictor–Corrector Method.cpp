#include <iostream>
#include <cmath>
using namespace std;

float f(float x, float y)
{
    return 2 * y / x;
}
int main()
{
    int i,n;
    float x, y, xp, h, m1, m2;
    cout << "\t\t****** Heun's Method ******\n";
    cout << "\nInput initial values of x and y: ";
    cin >> x >> y;
    cout << "\nInput x at which y is required: ";
    cin >> xp;
    cout << "\nInput step-size h: ";
    cin >> h;

    n = (int)(xp - x) / h ;

    for (i = 1; i <= n; i++)
    {
        m1 = f(x, y);
        m2 = f(x + h, y + m1 * h);
        x = x + h;
        y = y + 0.5 * h * (m1 + m2);
    }

    cout << "\nValue of y at x = " << x << " is " << y << endl;
    cout<<"BIDUR KHANAL";

    return 0;
}