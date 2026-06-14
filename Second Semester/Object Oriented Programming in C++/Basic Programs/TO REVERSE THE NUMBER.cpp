#include<iostream>
using namespace std;
int main(){
long long num;
	cout<<"Enter the positive number: ";
	cin>>num;
	long long sum=0,r;
	while(num>0){
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;
	}
	cout<<"The reversed number is: "<<sum<<endl;
	return 0;
}