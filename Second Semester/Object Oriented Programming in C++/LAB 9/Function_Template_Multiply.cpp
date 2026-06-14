#include <iostream> 
using namespace std; 
template <typename T1, typename T2> 
multiply(T1 a, T2 b) { 
return a * b; 
} 
int main() { 
cout << "Int * Float: " << multiply(4, 2.5f) << endl; 
cout << "Double * Int: " << multiply(3.0, 2) << endl; 
return 0; 
} 
