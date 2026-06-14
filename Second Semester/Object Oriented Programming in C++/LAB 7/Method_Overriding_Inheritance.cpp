#include<iostream> 
using namespace std; 
class shape{ 
public: 
void display(){ 
cout<<"This is a shape"; 
} 
}; 
class circle:public shape{ 
public: 
void display(){ 
cout<<"This is circle"; 
} 
}; 
int main(){ 
circle c; 
c.display(); 
return 0; 
}
