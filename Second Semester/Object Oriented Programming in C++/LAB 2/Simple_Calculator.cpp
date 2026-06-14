#include<iostream> 
using namespace std; 
int main() 
{ 
int a,b,n,add,mul,sub,div; 
cout<<"Enter the value of a and b:"; 
cin>>a>>b; 
cout<<"Enter the operation number:"; 
cin>>n;  
 switch(n) 
 { 
  case 1: 
  add=a+b;
   cout<<"The value is:"<<add<<endl; 
   break; 
  case 2: 
  sub=a-b;
   cout<<"The value is:"<<sub<<endl; 
   break;
   case 3: 
  mul=a*b;
   cout<<"The value is:"<<mul<<endl; 
   break;  
   case 4: 
  div=a/b;
   cout<<"The value is:"<<div<<endl; 
   break;
  default: 
   cout<<"Invalid operation number";
 } 
 

 return 0;
}
