#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
string username = "admin"; 
string password = "1234"; 
string userInput, passInput; 
cout << "Enter username: "; 
cin >> userInput; 
cout << "Enter password: "; 
cin >> passInput; 
try { 
if (userInput != username || passInput != password) 
throw "Invalid username or password!"; 
cout << "Login successful!" << endl; 
} 
catch (const char *msg) { 
cout << " Exception: " << msg << endl; 
} 
return 0; 
}
