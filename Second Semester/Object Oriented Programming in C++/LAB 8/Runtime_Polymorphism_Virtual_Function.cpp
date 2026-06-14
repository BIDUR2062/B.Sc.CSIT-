#include <iostream> 
using namespace std; 
 
class Shape { 
public: 
    virtual void displayArea() { 
        cout << "Area of shape." << endl; 
    } 
}; 
 
class Circle : public Shape { 
public: 
    void displayArea() override { 
        cout << "Area of Circle = p*r*r" << endl; 
    } 
}; 
 
class Rectangle : public Shape { 
public: 
    void displayArea() override { 
        cout << "Area of Rectangle = l * b" << endl; 
    } 
}; 
 
int main() { 
    Shape* s; 
    Circle c; 
    Rectangle r; 
 
    s = &c; 
    s->displayArea();  // Late binding 
 
    s = &r; 
    s->displayArea();  // Late binding 
    return 0; 
}
