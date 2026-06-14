#include<iostream>
using namespace std;
int main()
{
	int i=10.7;
	float f=i;
	cout<<"Implicit int to float:"<<f<<endl;
	int g=(int)f;
	cout<<"Explicit float to int:"<<g<<endl;
	return 0;
}
