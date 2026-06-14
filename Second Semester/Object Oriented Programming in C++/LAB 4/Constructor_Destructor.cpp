#include<iostream> 
using namespace std; 
class Student{
private: 
 string name; 
 int age; 
 public: 
  Student(string n,int a){ 
   name=n; 
   age=a; 
   cout<<"Constructor called for "<<name<<endl; 
   } 
   ~Student() 
   { 
    cout<<"Destructor called for "<<name<<endl; 
   } 
    void display()
   {
   	cout<<"Name:"<<name<<",Age:"<<age<<endl;
   }
}; 
int main() 
{ 
 Student s1("Bidur",18); 
 s1.display();
 return 0; 
}
