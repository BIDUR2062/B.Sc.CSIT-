#include <iostream> 
using namespace std; 
// Class template 
template <typename T> 
class Base { 
public: 
T a, b; 
Base(){ // default constructor 
a=0; 
b=0; 
} 
Base(T c, T d) {// parameterized constructor 
a = c; 
b = d;} 
T display() { 
return a + b;} 
}; 
template <class T> 
class Derived: public Base<T> { 
public: 
Derived(){}// Base<T>'s default constructor is automatically called 
void add() { 
cout << "Insert a: "; 
cin >> Base<T>::a;  // Explicitly qualify with Base<T>:: 
cout << "Insert b: "; 
cin >> Base<T>::b; } // Explicitly qualify with Base<T>:: 
}; 
int main() { 
Derived<int> obj; 
obj.add(); 
cout << "Sum: " << obj.display() << endl; 
return 0; 
}
