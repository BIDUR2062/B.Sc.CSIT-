#include <iostream>
using namespace std;

class Rupee; 

class Dollar {
    float dollar;
public:
    Dollar() {}
    Dollar(float d) : dollar(d) {}

    float getDollar() const { return dollar; }

    void display() const {
        cout << "Amount in Dollars: $ " << dollar << endl;
    }
    operator Rupee() const;
};

class Rupee {
    float rupee;
public:
    Rupee() {}
    Rupee(float r) : rupee(r) {}

    float getRupee() const { return rupee; }

    void display() const {
        cout << "Amount in Rupees: Rs " << rupee << endl;
    }
    operator Dollar() const {
        return Dollar(rupee / 133);
    }
};
Dollar::operator Rupee() const {
    return Rupee(dollar * 133);
}

int main() {
    int choice;
    float amount;

    cout << "Currency Converter\n";
    cout << "1. Convert Rupees to Dollars\n";
    cout << "2. Convert Dollars to Rupees\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter amount in Rupees: ";
        cin >> amount;
        Rupee r(amount);
        Dollar d = r; 
        r.display();
        d.display();
    } else if (choice == 2) {
        cout << "Enter amount in Dollars: ";
        cin >> amount;
        Dollar d(amount);
        Rupee r = d; 
        d.display();
        r.display();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
