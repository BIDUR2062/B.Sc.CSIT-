#include <iostream> 
#include <fstream> 
using namespace std; 
int main() { 
fstream file; 
// Open in write mode 
file.open("name.txt", ios::out); 
file << "Bidur Khanal"; 
file.close(); // Close file 
// Reopen in read mode 
file.open("name.txt", ios::in); 
string name; 
getline(file, name); 
cout << "Name from file: " << name << endl; 
file.close(); 
return 0; 
} 
