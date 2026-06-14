#include <iostream> 
using namespace std; 
 
class Animal { 
public: 
    Animal() { 
        cout << "Animal created." << endl; 
    } 
 
    virtual ~Animal() { 
        cout << "Animal destroyed." << endl; 
    } 
}; 
 
class Dog : public Animal { 
public: 
    Dog() { 
        cout << "Dog created." << endl; 
    } 
 
    ~Dog() { 
        cout << "Dog destroyed." << endl; 
    } 
}; 
 
int main() { 
    Animal* a = new Dog();    // Base class pointer 
    delete a;                              // Virtual destructor ensures Dog's destructor is called 
    return 0; 
}
