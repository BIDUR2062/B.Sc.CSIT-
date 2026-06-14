#include <iostream>
#include <bitset>
using namespace std;

void arithmeticRightShift(int &A, int &Q, int &Q_1, int n) {
    Q_1 = Q & 1;
    Q = (Q >> 1) | ((A & 1) << (n - 1));
    A = A >> 1;
}
string toBinary(int x, int n) {
    unsigned int mask = (1u << n) - 1;
    return bitset<32>(x & mask).to_string().substr(32 - n);
}
int main() {
    int M, Q, A = 0, Q_1 = 0;
    int n;
    cout << "Enter number of bits: ";
    cin >> n;
    cout << "Enter Multiplicand (M): ";
    cin >> M;
    cout << "Enter Multiplier (Q): ";
    cin >> Q;
    cout << "\nInitial Values:\n";
    cout << "A = " << toBinary(A, n) << " Q = " << toBinary(Q, n) << " Q-1 = " << Q_1 << endl;
    for (int i = 0; i < n; i++) {
        int Q0 = Q & 1;
        if (Q0 == 1 && Q_1 == 0) {
            A = A - M;
            cout << "\nA = A - M";
        }
        else if (Q0 == 0 && Q_1 == 1) {
            A = A + M;
            cout << "\nA = A + M";
        }
        arithmeticRightShift(A, Q, Q_1, n);
        cout << "\nAfter shift -> ";
        cout << "A = " << toBinary(A, n) << " Q = " << toBinary(Q, n) << " Q-1 = " << Q_1 << endl;
    }
    int result= (A<<n)|(Q & ((1 << n) - 1));
    cout<<"\nFinal Result (Binary): "<< toBinary(result, 2*n) << endl;
    cout<<"BIDUR KHANAL";
    return 0;
}
