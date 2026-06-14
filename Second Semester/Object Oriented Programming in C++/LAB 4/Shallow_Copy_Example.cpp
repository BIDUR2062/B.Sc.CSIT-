#include<iostream> 
using namespace std; 
class student
{ 
	public: 
		string name; 
		int id;
}; 
int main()
{ 
	student s1; 
	s1.id=101; 
	s1.name="Bidur";
	student s2(s1); 
	cout<<"s1 ID: "<<s1.id<<" s1 name: "<<s1.name<<endl; 
	cout<<"s2 ID: "<<s2.id<<" s2 name: "<<s2.name<<endl;  
	return 0; 
}
