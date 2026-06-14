#include<iostream> 
using namespace std; 
class A{ 
int value; 
public: 
A(int v){ 
value=v; 
} 
int getvalue(){ 
return value; 
} 
};
class B{
int data; 
public: 
B(A a){ 
data = a.getvalue();
}
void display() const{ 
cout<<"Value in class is: "<<data<<endl; 
} 
}; 
int main(){ 
A objA(100); 
B objB=objA; 
objB.display(); 
return 0; 
}
