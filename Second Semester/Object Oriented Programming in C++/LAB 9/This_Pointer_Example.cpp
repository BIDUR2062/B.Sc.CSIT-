#include <iostream> 
using namespace std; 
class Student { 
int id; 
string name; 
public: 
void setData(int id, string name) { 
this->id = id; 
this->name = name; 
} 
void display() { 
cout << "ID: " << this->id << "\nName: " << this->name << endl; 
} 
}; 
int main() { 
Student s; 
s.setData(101, "Bidur"); 
s.display(); 
return 0; 
} 
