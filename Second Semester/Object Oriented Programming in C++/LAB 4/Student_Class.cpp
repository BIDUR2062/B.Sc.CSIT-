#include<iostream> 
#include<string.h>
using namespace std; 
class Student{
private: 
  int rollNo; 
  string name;
  public: 
   void getdata(int a,string b) 
   { 
 rollNo=a;
 name=b; 
   } 
   void display(){ 
cout<<"The roll no is:"<<rollNo<<endl;
	cout<<"The name is:"<<name<<endl; 
   }
}; 
int main() 
{ 
 Student s; 
 s.getdata(21,"Bidur"); 
 s.display(); 
return 0; 
}
