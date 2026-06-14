#include<iostream> 
using namespace std; 
class counter{ 
int count; 
public: 
counter(){ 
count=0; 
}  
void display(){ 
cout<<"Count: "<<count<<endl; 
} 
counter operator++(){ 
counter temp; 
temp.count=count+1; 
count++; 
return temp; 
} 
counter operator++(int){ 
counter temp; 
temp.count=count; 
count++; 
return temp;} 
}; 
int main(){ 
counter c; 
cout<<"Intial: "; 
c.display(); 
cout<<"After Prefix ++C: "; 
c=++c; 
c.display(); 
cout<<"After postfix C++: "; 
c=c++; 
c.display();
return 0; 
}
