#include <iostream> 
using namespace std; 
template <class T> 
class Box { 
T value; 
public: 
Box(T val) { 
value = val; 
} 
void display() { 
cout << "Value: " << value << endl; 
} 
}; 
int main() { 
Box<int> b1(100); 
Box<string> b2("Template Example"); 
b1.display(); 
b2.display(); 
return 0; 
} 
