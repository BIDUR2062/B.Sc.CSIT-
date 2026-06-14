#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the three Digit number: ";
	cin>>num;
	int sum=0,r,temp;
	temp=num;
	while(num>0){
		r=num%10;
		sum+=(r*r*r);
		num=num/10;
	}
	if(sum==temp){
		cout<<"Armstrong ";
		
	}
	else{
		cout<<"Not armstrong ";
	}
	return 0;
	
}