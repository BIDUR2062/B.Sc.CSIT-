#include<iostream> 
using namespace std; 
class Distance{ 
private: 
int meter; 
public: 
Distance(int m) 
{ 
meter=m; 
} 
operator int() 
{ 
return meter; 
} 
void display(){ 
cout<<"The value: "<<meter<<endl; 
} 
}; 
int main() 
{ 
Distance d1(2.3333); 
d1.display();
return 0; 
}
