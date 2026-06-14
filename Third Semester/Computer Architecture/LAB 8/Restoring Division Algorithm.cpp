#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int bitsRequired(int x) {
    return floor(log2(x)) + 1;
}

int main() {
    int dividend, divisor;

    cout << "Enter Dividend (decimal): ";
    cin >> dividend;

    cout << "Enter Divisor (decimal): ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Division by zero is not allowed!";
        return 0;
    }

    int n = bitsRequired(dividend);
    int Q = dividend;
    int M = divisor;
    int A = 0;

    int mask = (1 << n) - 1;

    cout << "\nInitial Values (Binary)\n";
    cout << "A = " << bitset<8>(A) << endl;
    cout << "Q = " << bitset<8>(Q) << endl;
    cout << "M = " << bitset<8>(M) << endl;

    for (int i = 0; i < n; i++) {

        A = ((A << 1) | ((Q >> (n - 1)) & 1));
        Q = (Q << 1) & mask;

        if (A >= 0)
            A = A - M;
        else
            A = A + M;

        if (A >= 0)
            Q = Q | 1;

        cout << "\nStep " << i + 1 << endl;
        cout << "A = " << bitset<8>(A) << endl;
        cout << "Q = " << bitset<8>(Q) << endl;
    }

    if (A < 0)
        A = A + M;

    cout << "\nFinal Result\n";
    cout << "Quotient (Binary)  = " << bitset<8>(Q) << endl;
    cout << "Remainder (Binary) = " << bitset<8>(A) << endl;

    cout << "\nQuotient (Decimal)  = " << Q << endl;
    cout << "Remainder (Decimal) = " << A << endl;
    cout<<"BIDUR KHANAL";

    return 0;
}
