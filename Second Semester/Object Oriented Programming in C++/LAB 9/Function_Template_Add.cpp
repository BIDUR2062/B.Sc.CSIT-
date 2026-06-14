#include <iostream> 
using namespace std; 
template <typename T> 
T add(T a, T b) { 
return a + b; 
} 
int main() { 
cout << "Int Sum: " << add(5, 10) << endl; 
cout << "Float Sum: " << add(3.2f, 2.5f) << endl; 
cout << "Char Sum (ASCII): " << add('A', 'B') << endl; 
return 0; 
}
