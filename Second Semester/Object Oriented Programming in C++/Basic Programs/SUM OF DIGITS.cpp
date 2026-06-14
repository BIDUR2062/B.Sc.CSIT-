#include<iostream>
using namespace std;
int main(){
	int sum=0,r,n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	while(n>0){
			r=n%10;
		sum=sum+r;
	
		n=n/10;
	}
	cout<<"Sum of the digits is: "<<sum<<endl;
	return 0;
}