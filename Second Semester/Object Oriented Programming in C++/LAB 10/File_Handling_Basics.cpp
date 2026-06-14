#include <iostream> 
#include <fstream> 
using namespace std; 
int main() { 
ofstream outFile("message.txt"); // Create file and write 
outFile << "Welcome to file handling in C++!"; 
outFile.close(); 
ifstream inFile("message.txt"); // Read the file 
string line; 
getline(inFile, line); 
cout << "File Content: " << line << endl; 
inFile.close(); 
return 0; 
} 
