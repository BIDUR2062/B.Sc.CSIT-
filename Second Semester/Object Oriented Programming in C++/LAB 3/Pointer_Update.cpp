#include<iostream> 
using namespace std; 
void update(int *ptr) 
{ 
*ptr=*ptr+10; 
} 
int main(){ 
int num=20; 
cout<<"Before update:"<<num<<endl; 
update(&num); 
cout<<"After update:"<<num<<endl; 
return 0; 
}
