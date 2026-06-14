#include<iostream>
using namespace std;
int recu(int n){
	if(n==0)
	{
		return 1;
	}
	else{
	
	return n*recu(n-1);
}

}
int main(){
	int num;
	cout<<"Enter the number for the factorial calculation: ";
	cin>>num;
	int result=recu(num);
	cout<<"The factorial is: "<<result<<endl;
	return 0;
}