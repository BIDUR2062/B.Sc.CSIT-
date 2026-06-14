#include<iostream> 
using namespace std; 
float area(float r) 
{ 
return 3.14*r*r; 
} 
int area(int l,int b) 
{ 
return l*b; 
} 
int arear(int side) 
{ 
return side*side; 
} 
int main(){ 
cout<<"Area of the circle:"<<area(7.3f)<<endl; 
cout<<"Area of the rectangle is: "<<area(2,9)<<endl; 
cout<<"Area of the square is: "<<area(6)<<endl; 
return 0; 
} 
