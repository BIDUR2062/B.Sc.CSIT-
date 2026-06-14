#include <iostream>     
#include <fstream>     
using namespace std; 
int main() { 
ifstream file("abc.txt");

if (!file) { 
cout << "File not found!" << endl; // Show error if file not found 

return 0; // Exit the program 
}
}

