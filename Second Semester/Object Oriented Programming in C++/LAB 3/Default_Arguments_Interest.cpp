#include<iostream> 
using namespace std; 
float interest(int p,int t, int r=3) 
{ 
return (p*t*r)/100; 
} 
int main() 
{ 
int result; 
result=interest(1000,2); 
cout<<"The interest  is :"<<result<<endl;   
return 0; 
} 
