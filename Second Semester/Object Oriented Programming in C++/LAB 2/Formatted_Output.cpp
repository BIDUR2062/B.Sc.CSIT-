#include<iostream> 
#include<iomanip> 
using namespace std; 
int main() 
{ 
string name; 
int age; 
cout<<"Enter your name: "; 
getline(cin,name); 
cout<<"Enter your age: "; 
cin>>age; 
cout<<setw(5)<<left<<"Name: "<<name<<endl; 
cout<<setw(5)<<left<<"age: "<<age<<endl; 
return 0; 
} 
