#include <iostream> 
using namespace std; 
class Calculator { 
public: 
double divide(double a, double b) { 
if (b == 0) 
throw "Division by zero!"; 
return a / b; 
} 
}; 
int main() { 
double x, y; 
cout << "Enter two numbers: "; 
cin >> x >> y; 
Calculator c; 
try { 
cout << "Result: " << c.divide(x, y) << endl; 
} catch (const char* msg) { 
cout << "Error: " << msg << endl; 
} 
return 0; 
}
