#include<iostream> 
using namespace std; 
inline int cube(int n) 
{ 
return n*n*n; 
} 
int main() 
{ 
int result=cube(7);
cout<<"Result: "<<result<<endl;  
return 0; 
} 
