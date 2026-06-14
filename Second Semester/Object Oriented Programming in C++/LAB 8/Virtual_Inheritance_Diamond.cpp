#include <iostream> 
using namespace std; 
 
class A { 
public: 
    int a; 
    void setA(int val) { 
        a = val; 
    } 
    void showA() { 
        cout << "Value from class A: " << a << endl; 
    } 
}; 
 
class B : virtual public A { 
public: 
    void showB() { 
        cout << "This is class B" << endl; 
    } 
}; 
 
class C : virtual public A { 
public: 
    void showC() { 
        cout << "This is class C" << endl; 
    } 
}; 
 
class D : public B, public C { 
public: 
    void showD() { 
        cout << "This is class D" << endl; 
    } 
}; 
 
int main() { 
D obj; 
obj.setA(50);     // Accessing member of A directly from D 
obj.showA();      
// No ambiguity due to virtual inheritance 
obj.showB(); 
obj.showC(); 
obj.showD();
 
return 0; 
}
