#include <iostream> 
using namespace std; 
class person { 
public: 
string name; 
int age; 
 
    void getdetails() { 
        cout << "Enter the name: "; 
        cin >> name; 
        cout << "Enter the age: "; 
        cin >> age; 
    } 
}; 
 
class student : public person { 
public: 
    int roll; 
 
    void getstudentdata() { 
        cout << "Enter the roll no: "; 
        cin >> roll; 
    } 
}; 
 
class sports { 
public: 
    int score; 
 
    void getscore() { 
        cout << "Enter the score: "; 
        cin >> score; 
    } 
}; 
 
class result : public student, public sports { 
public: 
    void displayresult() { 
        cout << "\n----- Result -----\n"; 
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl; 
        cout << "Roll No: " << roll << endl; 
        cout << "Score: " << score << endl; 
    } 
}; 
 
int main() { 
    result r; 
    r.getdetails(); 
    r.getstudentdata(); 
    r.getscore(); 
    r.displayresult(); 
    return 0; 
} 
