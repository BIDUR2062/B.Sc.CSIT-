#include<iostream> 
using namespace std; 
class A{ 
public: 
void displayA(){ 
cout<<"Function of class A is called"<<endl; 
} 
}; 
class B:public A{ 
public: 
void displayB(){ 
cout<<"Function of class B is called"<<endl; 
} 
}; 
class C:public B{ 
public: 
void displayC(){ 
cout<<"Function of class c is called"<<endl; 
} 
}; 
int main(){ 
C objc; 
objc.displayA(); 
objc.displayB(); 
objc.displayC(); 
return 0; 
}
