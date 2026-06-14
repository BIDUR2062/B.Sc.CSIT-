#include <iostream> 
#include <fstream> 
using namespace std; 
int main() { 
// Write "Hello" to a file 
ofstream out("text.txt"); 
out << "Helloworld"; 
out.close(); 
// Read from file using get pointer 
ifstream in("text.txt"); 
in.seekg(5,ios::beg);  // Move to  bytes from beginning of the files) 
cout << "Current position using tellg(): " << in.tellg() << endl; 
char ch; 
in >> ch; 
cout << "Character at position 5 is: " << ch << endl; 
in.close(); 
return 0; 
}
