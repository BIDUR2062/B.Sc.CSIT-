#include<iostream> 
using namespace std; 
class base{ 
public: 
base() 
{ 
cout<<"constructor from base class is called"<<endl; 
} 
~base(){ 
cout<<"Destructor from base class is called"<<endl; 
} 
}; 
class derived:public base{ 
public: 
derived(){ 
cout<<"Constructor from derived class is called"<<endl; 
} 
~derived(){ 
cout<<"Destructor from derived class is called"<<endl; 
} 
}; 
int main(){ 
derived d; 
return 0;
 
}
