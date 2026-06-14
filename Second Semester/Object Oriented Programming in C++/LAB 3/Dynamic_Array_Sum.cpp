#include<iostream> 
using namespace std; 
int main() 
{ 
int n,sum=0; 
int i; 
cout<<"Enter numbers of elements: "; 
cin>>n; 
int *arr=new int[n]; 
cout<<"Enter the elements: "; 
for(i=0;i<n;i++) 
{ 
cin>>arr[i]; 
sum+=arr[i]; 
} 
cout<<"Sum="<<sum<<endl; 
delete[] arr;
return 0; 
} 
