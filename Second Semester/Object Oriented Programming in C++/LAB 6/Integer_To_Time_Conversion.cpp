#include<iostream> 
using namespace std; 
class work
{ 
	private: 
	int hours; 
	int minutes; 
	public: 
	work(int time)
	{ 
		hours=time/60; 
		minutes=time%60; 
	} 
	void display()
	{ 
		cout<<"Time in hours:"<<hours<<" and in minutes: "<<minutes<<endl; 
	} 
}; 
int main() 
{ 
	int input; 
	cout<<"Enter the value: "; 
	cin>>input; 
	work w(input); 
	w.display(); 
	return 0; 
} 
