#include <iostream>
#include <cmath>

using namespace std;

#define EPS 0.00001

float f1(float x, float y1, float y2)
{
    return y2;
}
float f2(float x, float y1, float y2)
{
    return 8 * x - 4 * y2 - 5 * y1;
}
float heun(float x0, float x1, float y0, float y1, float h)
{
    float m11, m12, m21, m22;
    while (fabs(x0 - x1) > EPS)
    {
        m11 = f1(x0, y0, y1);
        m21 = f2(x0, y0, y1);

        m12 = f1(x0 + h, y0 + h * m11, y1 + h * m21);
        m22 = f2(x0 + h, y0 + h * m11, y1 + h * m21);

        y0 = y0 + 0.5 * h * (m11 + m12);
        y1 = y1 + 0.5 * h * (m21 + m22);

        x0 = x0 + h;
    }

    return y0;
}

int main()
{
    float x0, yx0, yx1, xp, yxp, h;
    char q;

    cout << "\t\t******Solving 2nd order IVP******\n";

    cout << "\n Enter the initial point x: ";
    cin >> x0;

    cout << "\n Enter the value of y(x): ";
    cin >> yx0;

    cout << "\n Enter the value of y'(x): ";
    cin >> yx1;

    cout << "\n Enter the step length h: ";
    cin >> h;

    do
    {
        cout << "\n\n Enter the point x at which y(x) is required: ";
        cin >> xp;

        yxp = heun(x0, xp, yx0, yx1, h);

        cout << "\n The approximate value of y(" << xp << ") is " << yxp;

        cout << "\n\n Do you want to approximate at another point? (y/n): ";
        cin >> q;

    } while (q == 'y' || q == 'Y');
cout<<"BIDUR KHANAL";
    return 0;
}