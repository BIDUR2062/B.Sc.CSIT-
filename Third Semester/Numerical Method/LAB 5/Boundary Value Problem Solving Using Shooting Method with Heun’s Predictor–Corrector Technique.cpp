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
    return 4 * x * x * x * y1 + 2;
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
    float x0, yx0, x1, yx1, guess1, guess2, guess3, h, xp;

    cout << "\t\t******BVP - Shooting Method******\n";

    cout << "\n Enter first boundary (x y): ";
    cin >> x0 >> yx0;

    cout << "\n Enter second boundary (x y): ";
    cin >> x1 >> yx1;

    cout << "\n Enter step length h: ";
    cin >> h;

    cout << "\n Enter first guess of y'(" << x0 << "): ";
    cin >> guess1;

    float y1 = heun(x0, x1, yx0, guess1, h);

    cout << "\n Enter second guess of y'(" << x0 << "): ";
    cin >> guess2;

    float y2 = heun(x0, x1, yx0, guess2, h);

    guess3 = guess1 + (yx1 - y1) * (guess2 - guess1) / (y2 - y1);

    cout << "\n Enter x where y(x) is required: ";
    cin >> xp;

    cout << "\n Approximate value of y(" << xp << ") = " << heun(x0, xp, yx0, guess3, h);
    cout<<"\nBIDUR KHANAL\n";

    return 0;
}