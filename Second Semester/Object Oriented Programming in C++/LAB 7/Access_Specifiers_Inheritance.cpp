#include<iostream> 
using namespace std; 
class person{ 
private: 
int age=18; 
protected: 
string name="Bidur"; 
public: 
display(){ 
cout<<"The name is: "<<name<<"The age is :"<<age<<endl; 
} 
}; 
class student:protected person{ 
public: 
void display(){ 
cout<<"The name is: "<<name<<endl;//can access protected 
//cannot acess age as it is private 
} 
}; 
int main(){ 
student s; 
s.display(); 
return 0; 
}
