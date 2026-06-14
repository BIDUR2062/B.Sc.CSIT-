#include <iostream> 
using namespace std; 
 
class Employee { 
public: 
    virtual void calculateSalary() = 0; // Pure virtual function 
}; 
 
class FullTime : public Employee { 
public: 
    void calculateSalary() override { 
        cout << "Full-time salary = Base + Bonus" << endl; 
    } 
}; 
 
class PartTime : public Employee { 
public: 
    void calculateSalary() override { 
        cout << "Part-time salary = Hours * Rate" << endl; 
    } 
}; 
 
int main() { 
    Employee* e; 
    FullTime f; 
    PartTime p; 
 
    e = &f; 
    e->calculateSalary(); 
 
    e = &p; 
    e->calculateSalary(); 
    return 0; 
} 
